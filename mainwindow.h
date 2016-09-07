#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QScrollBar>
#include <QTextCodec>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <windows.h>
using namespace cv;

typedef int                 BOOL;
#define FALSE               0
#define TRUE              1


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	void ShowImage(const Mat& image, QLabel *showplace);
	Mat& GetRoi(int x, int y, int size);
	void Draw_Line(Mat fordraw,Point pos1, Point pos2);

private slots:
      void on_openFile_pushButton_clicked();
	  void on_threshold_pushButton_clicked();
	  void on_find2Dcontour_pushButton_clicked();
private:
    Ui::MainWindow *ui;
	Mat m_pImage;
	QImage* m_Qimg;
	Mat m_imageRoi;
	Mat m_imageDst;
	vector<vector<Point2f>> vector_of_contour;

protected:
	void mousePressEvent(QMouseEvent* event);
};

#endif // MAINWINDOW_H
