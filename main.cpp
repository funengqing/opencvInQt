#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include "quickopencv.h"
using namespace std;
using namespace cv;

void firstDay(){
  //加载图像使其成为一个Mat对象
  Mat img = imread("car2.jpg",IMREAD_COLOR);
  if(img.empty()){
      cout << "图片加载失败!" << endl;

    }
  line(img,Point(1,1),Point(200,200),Scalar(0,0,255),5);//画一条直线
  //namedWindow("一个苹果",WINDOW_FREERATIO);//加载完整的图片
  imshow("一个苹果", img);//确保标题名字和上面的一样
  //waitKey(2000);
  //destroyAllWindows();
}

void secondDay(){
  Mat img = imread("fromiphone.jpg",IMREAD_COLOR);
  Mat gray,hsv;
  cvtColor(img,hsv,COLOR_RGB2HSV);
  cvtColor(img,gray,COLOR_BGR2GRAY);
  namedWindow("HSV",WINDOW_FREERATIO);
  namedWindow("GRAY",WINDOW_FREERATIO);
  imshow("HSV",hsv);
  imshow("GRAY",gray);
  imwrite("./hsv.png",hsv);
  imwrite("./gray.png",gray);
}

int main()
{
    //firstDay();
    //secondDay();
    Mat img = imread("fromiphone.jpg",IMREAD_COLOR);
    QuickDemo qd;
    //qd.colorSpace_Demo(img);
    qd.mat_creation_demo(img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
