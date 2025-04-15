#pragma once
#include"tempstream.h"
#include"consts.h"

template<typename T>
T Sum(T arr[], const int n);						//Вывод отсортированного массива на экран
template<typename T>
T Sum(T arr[][COLS], const int ROWS, const int COLS);

template<typename T>
double Average(T arr[], const int n);					//Вывод средне-арифметического значения массива
template<typename T>
double Avg(T arr[][COLS], const int ROWS, const int COLS);

template<typename T>
int MinVal(T arr[], const int n);						//Вывод минимального значения массива
template<typename T>
double MinVal(T arr[][COLS], const int ROWS, const int COLS);

template<typename T>
int MaxVal(T arr[], const int n);						//Вывод Максимального значения массива
template<typename T>
double MaxVal(T arr[][COLS], const int ROWS, const int COLS);