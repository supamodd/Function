#pragma once
#include"stdafx.h"
#include"consts.h"


void ShiftLeft(int arr[], const int n, int shifts);		//�������� ������ � ����� �������
void ShiftLeft(double arr[], const int n, int shifts);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

void ShiftRight(int arr[], const int n, int shifts);	//�������� ������ � ������ �������
void ShiftRight(double arr[], const int n, int shifts);
void ShiftRight(int arr[][COLS], const int ROWS, const int COLS, int shifts);
