#include<iostream>
#include<vector>
#include"../FuncLib/FuncLib.h"
using namespace std;




int main() 
{
    setlocale(LC_ALL, "");
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
	int shifts;
	FillRand(i_arr_2);
	Print(i_arr_2);
	cout << "Уникальный массив: " << endl;
	Unique(i_arr_2, 0, 100);
	Print(i_arr_2);
	Sort(i_arr_2);
	Print(i_arr_2);
	cout << "Сумма: " << Sum2D(i_arr_2) << endl;
	cout << "Средне-арифметическое: " << Average2D(i_arr_2) << endl;
	cout << "Минимальное значение: " << MinVal2D(i_arr_2) << endl;
	cout << "Максимальное значение: " << MaxVal2D(i_arr_2) << endl;
	cout << "Введите количество сдвигов влево: ";
	cin >> shifts;
	ShiftLeft(i_arr_2, shifts);
	cout << "Массив после сдвига влево на " << shifts << " элементов:" << endl;
	Print(i_arr_2);
	cout << "Введите количество сдвигов вправо: ";
	cin >> shifts;
	ShiftRight(i_arr_2, shifts);
	cout << "Массив после сдвига вправо на " << shifts << " элементов:" << endl;
	Print(i_arr_2);
}