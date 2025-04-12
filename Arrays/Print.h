#pragma once    
#include"stdafx.h"
#include"consts.h"

template<typename T>
void Print(T arr[], const int n);
void Print(int arr[], const int n);				// Вывод исходного массива на экран
void Print(double arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);