// exercise_one.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������

#include <iostream>
#include <opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("E:\\Git\\gittest\\exercise_one\\6.jpg",0);
	
	imshow("src", srcMat);
	waitKey(0);
}

