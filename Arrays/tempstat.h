#pragma once
#include"tempstream.h"
#include"constemp.h"

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

template<typename T>
T Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Sum(T arr[][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double Average(T arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
template<typename T>
double Avg(T arr[][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum / (ROWS * COLS);
}
template<typename T>
int MinVal(T arr[], const int n)
{
	int minVal = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < minVal)
		{
			minVal = arr[i];
		}
	}
	return minVal;
}
template<typename T>
double MinVal(T arr[][COLS], const int ROWS, const int COLS)
{
	double minVal = INT_MAX;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minVal)
			{
				minVal = arr[i][j];
			}
		}
	}
	return minVal;
}
template<typename T>
int MaxVal(T arr[], const int n)
{
	int maxVal = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}
	return maxVal;
}
template<typename T>
double MaxVal(T arr[][COLS], const int ROWS, const int COLS)
{
	double maxVal = INT_MIN;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
}