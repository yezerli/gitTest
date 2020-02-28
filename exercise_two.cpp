// exercise_one.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("E:\\Git\\gittest\\exercise_one\\6.jpg",0);
	
	imshow("src", srcMat);
	waitKey(0);
}

