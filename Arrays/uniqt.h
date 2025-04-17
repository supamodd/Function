#pragma once
#include"tempstream.h"
#include"constemp.h"

template<typename T>
void Unique(T arr[][COLS], const int ROWS, const int COLS, int minVal, int maxVal);

template<typename T>
void Unique(T arr[][COLS], const int ROWS, const int COLS, int minVal, int maxVal)
{
	int totalElements = ROWS * COLS;
	int range = maxVal - minVal + 1;

	vector<int> usedNumbers;																				// ¬ектор дл€ отслеживани€ использованных чисел

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int randNum;
			do {
				randNum = minVal + rand() % range;															// √енераци€ случайного числа в заданном диапазоне
			} while (find(usedNumbers.begin(), usedNumbers.end(), randNum) != usedNumbers.end());			// ѕроверка на уникальность

			arr[i][j] = randNum;
			usedNumbers.push_back(randNum);																	// ƒобавление числа в список использованных
		}
	}
}