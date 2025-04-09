#include"statistics.h"

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(int arr[][COLS], const int ROWS, const int COLS)
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
double Average(int arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
double Average(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
double Avg(int arr[][COLS], const int ROWS, const int COLS)
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
int MinVal(int arr[], const int n)
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
double MinVal(double arr[], const int n)
{
	double minVal = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < minVal)
		{
			minVal = arr[i];
		}
	}
	return minVal;
}
double MinVal(int arr[][COLS], const int ROWS, const int COLS)
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
int MaxVal(int arr[], const int n)
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
double MaxVal(double arr[], const int n)
{
	double maxVal = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}
	return maxVal;
}
double MaxVal(int arr[][COLS], const int ROWS, const int COLS)
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