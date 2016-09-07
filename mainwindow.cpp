#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openFile_pushButton_clicked()
{
	BOOL state = FALSE;
	QString fileName = QFileDialog::getOpenFileName(this, QStringLiteral("select picture"), "./", "Images (*.png *.bmp *.jpg)");
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	string path = code->fromUnicode(fileName).data();
	if (ui->GrayScale_openmode_checkBox->isChecked() == 0)
	{
		m_pImage = imread(path);
	}
	else
	{
		m_pImage = imread(path, IMREAD_GRAYSCALE);
	}
	if (m_pImage.data != NULL)
	{
     	state = TRUE;
	}
	if (FALSE == state )
	{
		QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("打开图像失败！"));
	}
	else
	{
		ShowImage(m_pImage, ui->label_imgShow);
	}
}
void  MainWindow::ShowImage(const Mat& image,QLabel *showplace)
{
	if (image.data)
	{
		BOOL state = TRUE;
		int channel = image.channels();		
		int w = image.cols;
		int h = image.rows;
		QImage qimg;
		Mat rgb;
		

		if (1 == channel)
		{
			qimg = QImage((uchar*)image.data, w, h,image.step, QImage::Format_Indexed8);
		}
		else if (3 == channel)
		{
			cvtColor(image, rgb, CV_BGR2RGB);
			qimg = QImage((uchar*)rgb.data, w, h,image.step, QImage::Format_RGB888);
		}
		else
		{
			state = FALSE;
		}

		if (state)
		{
			
			showplace->setPixmap(QPixmap::fromImage(qimg));
			showplace->resize(w, h);
		}
	}

}
void MainWindow::mousePressEvent(QMouseEvent* event)
{
	if (Qt::LeftButton == event->button())
	{
		QPoint labelPos = ui->label_imgShow->pos();
		QPoint scrollAreaPos = ui->scrollArea->pos();
		QPoint mousePos = event->pos();

		int scrollAreaw = ui->scrollArea->width();
		int scrollAreah = ui->scrollArea->height();
		/*ui->textEdit->setText(QString("mouse.x = ")+QString::number(event->pos().x()));
		ui->textEdit->append(QString("tabWidget.x = ") + QString::number(ui->tabWidget->pos().x()));
		ui->textEdit->append(QString("scrollArea.x = ") + QString::number(ui->scrollArea->pos().x()));
		ui->textEdit->append(QString("label.x = ") + QString::number(ui->label_imgShow->pos().x()));
		ui->textEdit->append(QString("maintoolBar.y = ") + QString::number(ui->mainToolBar->size().height()));
		ui->textEdit->append(QString("menubar.y = ") + QString::number(ui->menuBar->size().height()));*/
		if ((mousePos.x() > labelPos.x()) && (mousePos.y() > labelPos.y()) && (mousePos.x() < labelPos.x() + scrollAreaw) && (mousePos.y() < labelPos.y() + scrollAreah))
		{
			// x方向，减去scrollArea和label的边距
			int x = mousePos.x() - ui->tabWidget->pos().x() - labelPos.x() - scrollAreaPos.x() + ui->scrollArea->horizontalScrollBar()->value() - 2;//2为补偿
			// y方向，减去scrollArea和label的边距，以及toolbar和menubar的宽度
			int y = mousePos.y() - ui->tabWidget->pos().y() - scrollAreaPos.y() - labelPos.y() + ui->scrollArea->verticalScrollBar()->value() - ui->mainToolBar->size().height() - ui->menuBar->size().height() - 2;
			//ui->textEdit->append(QString::number(y));
			Mat roi = GetRoi(x, y, ui->lineEdit_windowSize->text().toInt());
			ui->textEdit->append("x:" + QString::number(x) + "  " + "y:" + QString::number(y));

			if (roi.data)
			{
				int w = roi.cols;
				int h = roi.rows;
				int channel = roi.channels();
				QString str = "";

				for (int i = 0; i < h; i++)
				{
					uchar* data = roi.ptr<uchar>(i);
					for (int j = 0; j < w * channel; j += channel)
					{
						if (3 == channel)
						{
							str += "(" + QString::number(data[j]) + " " + QString::number(data[j + 1]) + " " + QString::number(data[j + 2]) + ")" + " ";
						}
						else
						{
							str += QString::number(data[j]) + " ";
						}
					}

					ui->textEdit->append(str);
					str = "";
				}

				ui->textEdit->append("----------");
			}
		}
	}
}
Mat& MainWindow::GetRoi(int x, int y, int size)
{
	if (m_pImage.data)
	{
		if (x > m_pImage.cols - 1)
		{
			x = m_pImage.cols - 1;
		}

		if (y > m_pImage.rows - 1)
		{
			y = m_pImage.rows - 1;
		}

		if (x + size > m_pImage.cols - 1)
		{
			size = 1;
		}

		if (y + size > m_pImage.rows - 1)
		{
			size = 1;
		}
		m_imageRoi = m_pImage(Rect(x, y, size, size));
	}

	return m_imageRoi;
}


void MainWindow::on_threshold_pushButton_clicked()
{
	int channel = m_pImage.channels();
	Mat gray;
	int thresh = ui->lineEdit_thresh->text().toInt();
	if (m_pImage.data)
	{
		if (3 == channel)
		{
			cvtColor(m_pImage, gray, CV_BGR2GRAY);
			threshold(gray, m_imageDst, thresh, 255, CV_THRESH_BINARY);
		}
		else
		{
			threshold(m_pImage, m_imageDst, thresh, 255, CV_THRESH_BINARY);
		}

		ShowImage(m_imageDst, ui->label_imgShow);
	}
	else
	{
		ShowImage(m_pImage, ui->label_imgShow);
	}
}
void MainWindow::on_find2Dcontour_pushButton_clicked()
{
	int w = m_pImage.cols;
	int h = m_pImage.rows;
	int channel = m_pImage.channels();
	int point_value;
	int threshold = ui->lineEdit_thresh->text().toInt();
	vector_of_contour = { {} };
	for (int i = 0; i < h; i++)
	{
		uchar* data = m_pImage.ptr<uchar>(i);
		for (int j = 0; j < w * channel; j += channel)
		{
			{
				point_value = data[j];
				if (point_value<threshold)//是否为边界点
				{
					vector_of_contour[0].push_back(Point(i, j));
				}
			}
		}
	}
	Mat Mat_of_point =Mat::zeros(h, w, CV_8UC3);
	for (int i = 0; i < vector_of_contour[0].size(); i++)
	{
		Point a = vector_of_contour[0][i];
		int x = vector_of_contour[0][i].x;
		int y = vector_of_contour[0][i].y;
		Mat_of_point.at<Vec3b>(x,y)[0] = 255;
	}
	ShowImage(Mat_of_point, ui->label_5);
}
void MainWindow::Draw_Line(Mat fordraw,Point pos1,Point pos2)
{
//	cv::DrawLine(fordraw, pos1, pos2);

}
