#include "quickopencv.h"

void QuickDemo::colorSpace_Demo(Mat &image){
  Mat gray,hsv;
  cvtColor(image,hsv,COLOR_RGB2HSV);
  cvtColor(image,gray,COLOR_BGR2GRAY);
  namedWindow("HSV",WINDOW_FREERATIO);
  namedWindow("GRAY",WINDOW_FREERATIO);
  imshow("HSV",hsv);
  imshow("GRAY",gray);
  imwrite("./hsv.png",hsv);
  imwrite("./gray.png",gray);
}

void QuickDemo::mat_creation_demo(Mat &image){
  Mat m1,m2,m3;
  //clone 与　copyto的区别;
  m1=image.clone();
  image.copyTo(m2);
//  namedWindow("m2",WINDOW_FREERATIO);
//  imshow("m2",m1);

  //空白图像
  m3 = Mat::zeros(Size(8,8),CV_8UC3);//8位无符号字符,８位位深,高度,单通道,1个像素一个通道,以此类推
  std::cout << m3.rows << std::endl;//m3.rows,m3.cols,m3.channles

  Mat m4 = m3;//指针,m4指向m3,m4改变时,m3也会改变,使用clone,copyto,就不会
}
