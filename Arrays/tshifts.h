#pragma once
#include"tempstream.h"
#include"constemp.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int shifts);		//�������� ������ � ����� �������
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

template<typename T>
void ShiftRight(T arr[], const int n, int shifts);	//�������� ������ � ������ �������
template<typename T>
void ShiftRight(T arr[][COLS], const int ROWS, const int COLS, int shifts);