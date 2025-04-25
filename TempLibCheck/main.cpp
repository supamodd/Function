#include<iostream>
#include"../TempLib/TempLib.h"

void main()
{
	setlocale(LC_ALL, "");
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
	int shifts;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Уникальный массив: " << endl;
	Unique(i_arr_2, ROWS, COLS, 1, 100);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << MinVal(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << MaxVal(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: ";
	cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	cout << "Массив после сдвига влево на " << shifts << " элементов:" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов вправо: ";
	cin >> shifts;
	ShiftRight(i_arr_2, ROWS, COLS, shifts);
	cout << "Массив после сдвига вправо на " << shifts << " элементов:" << endl;
	Print(i_arr_2, ROWS, COLS);
}