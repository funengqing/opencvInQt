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

}
