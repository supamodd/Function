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

	vector<int> usedNumbers;																				// ������ ��� ������������ �������������� �����

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int randNum;
			do {
				randNum = minVal + rand() % range;															// ��������� ���������� ����� � �������� ���������
			} while (find(usedNumbers.begin(), usedNumbers.end(), randNum) != usedNumbers.end());			// �������� �� ������������

			arr[i][j] = randNum;
			usedNumbers.push_back(randNum);																	// ���������� ����� � ������ ��������������
		}
	}
}