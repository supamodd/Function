#pragma once
#include"stdafx.h"
#include"consts.h"

int Sum(int arr[], const int n);						//����� ���������������� ������� �� �����
double Sum(double arr[], const int n);
double Sum(int arr[][COLS], const int ROWS, const int COLS);

double Average(int arr[], const int n);					//����� ������-��������������� �������� �������
double Average(double arr[], const int n);
double Avg(int arr[][COLS], const int ROWS, const int COLS);

int MinVal(int arr[], const int n);						//����� ������������ �������� �������
double MinVal(double arr[], const int n);
double MinVal(int arr[][COLS], const int ROWS, const int COLS);

int MaxVal(int arr[], const int n);						//����� ������������� �������� �������
double MaxVal(double arr[], const int n);
double MaxVal(int arr[][COLS], const int ROWS, const int COLS);