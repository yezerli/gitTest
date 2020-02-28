// exercise_one.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("E:\\Git\\gittest\\exercise_one\\6.jpg");
	int height = srcMat.rows;//表示行数
	int width = srcMat.cols;//表示每行元素的总元素数量
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			uchar average = (srcMat.at<Vec3b>(j, i)[0] + srcMat.at<Vec3b>(j, i)[1] + srcMat.at<Vec3b>(j, i)[2]) / 3;
			srcMat.at<Vec3b>(j, i)[0] = average;
			srcMat.at<Vec3b>(j, i)[1] = average;
			srcMat.at<Vec3b>(j, i)[2] = average;
		}
	}
	imshow("src", srcMat);
	waitKey(0);
}

