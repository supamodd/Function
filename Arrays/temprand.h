#pragma once
#include"tempstream.h"
#include"consts.h"

template<typename T>
void FillRand(T arr[], const int n);					// ��������� ������ ���������� �������
template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);