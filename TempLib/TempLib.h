#pragma once
#include<iostream>
#include<vector>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[][COLS], const int ROWS, const int COLS);
			
template<typename T>
double Avg(T arr[][COLS], const int ROWS, const int COLS);

template<typename T>
double MinVal(T arr[][COLS], const int ROWS, const int COLS);
						
template<typename T>
double MaxVal(T arr[][COLS], const int ROWS, const int COLS);
		
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

template<typename T>
void ShiftRight(T arr[][COLS], const int ROWS, const int COLS, int shifts);

template<typename T>
void Unique(T arr[][COLS], const int ROWS, const int COLS, int minVal, int maxVal);

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k > i ? 0 : j + 1; l < COLS; l++)
				{
					iterations++;
					//Если перебираемый элемент меньше чем выбранный, меняем их местами:
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << "Количество обменов: " << exchanges << endl;
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

template<typename T>
void ShiftLeft(T arr[], const int n, int shifts)
{
	shifts = shifts % n; // Нормализуем shifts, чтобы избежать лишних сдвигов
	if (shifts < 0) {
		shifts = shifts + n; // Обрабатываем отрицательные сдвиги
	}

	for (int i = 0; i < shifts; i++)
	{
		int temp = arr[0];					// Сохраняем первый элемент
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];			// Сдвиг элементов влево
		}
		arr[n - 1] = temp;
	}
}

template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shifts);
	}
}

template<typename T>
void ShiftRight(T arr[][COLS], const int ROWS, const int COLS, int shifts)
{
	shifts = shifts % COLS;									// Нормализуем shifts
	if (shifts < 0)
	{
		shifts = shifts + COLS;								// Преобразуем отрицательный сдвиг в положительный
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < shifts; k++)
		{
			int temp = arr[i][COLS - 1];					 // Сохраняем последний элемент строки
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];						// Сдвигаем элементы вправо
			}
			arr[i][0] = temp;								// Помещаем сохраненный последний элемент в начало строки
		}
	}
}

template<typename T>
void Unique(T arr[][COLS], const int ROWS, const int COLS, int minVal, int maxVal)
{
	int totalElements = ROWS * COLS;
	int range = maxVal - minVal + 1;

	vector<int> usedNumbers;																				// Вектор для отслеживания использованных чисел

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int randNum;
			do {
				randNum = minVal + rand() % range;															// Генерация случайного числа в заданном диапазоне
			} while (find(usedNumbers.begin(), usedNumbers.end(), randNum) != usedNumbers.end());			// Проверка на уникальность

			arr[i][j] = randNum;
			usedNumbers.push_back(randNum);																	// Добавление числа в список использованных
		}
	}
}