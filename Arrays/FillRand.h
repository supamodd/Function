#pragma once
#include"stdafx.h"
#include"consts.h"

void FillRand(int arr[], const int n);					// ��������� ������ ���������� �������
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);