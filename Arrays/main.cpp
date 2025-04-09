#include"stdafx.h"
#include"consts.h"
#include"FillRand.h"
#include"Print.h"
#include"sort.h"
#include"statistics.h"
#include"Shifts.h"
#include"Unique.h"
//#include"FillRand.cpp"  //Реализации функция НЕ подключаются на место вызова

void main()
{
	setlocale(LC_ALL, "");
	cout << "Массив arr: " << endl;
	const int n = 5;
	int arr[n];
	int shifts;
	FillRand(arr, n);	
	Print(arr, n);		
	Sort(arr, n);		
	Print(arr, n);		
	cout << "Сумма: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое: " << Average(arr, n) << endl;
	cout << "Минимальное значение: " << MinVal(arr, n) << endl;
	cout << "Максимальное значение: " << MaxVal(arr, n) << endl;
	//cout << "Введите количество сдвигов влево для массива arr: ";
	//cin >> shifts;
	//ShiftLeft(arr, n, shifts);
	//cout << "Массив arr после сдвига влево на " << shifts << " элементов:" << endl;
	//Print(arr, n);
	//cout << "Введите количество сдвигов вправо для массива arr: ";
	//cin >> shifts;
	//ShiftRight(arr, n, shifts);
	//cout << "Массив arr после сдвига вправо на " << shifts << " элементов:" << endl;
	//Print(arr, n);

	cout << "Массив brr: " << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое: " << Average(brr, SIZE) << endl;
	cout << "Минимальное значение: " << MinVal(brr, SIZE) << endl;
	cout << "Максимальное значение: " << MaxVal(brr, SIZE) << endl;
	//cout << "Введите количество сдвигов влево для массива brr: ";
	//cin >> shifts;
	//ShiftLeft(brr, SIZE, shifts);
	//cout << "Массив brr после сдвига влево на " << shifts << " элементов:" << endl;
	//Print(brr, SIZE);
	//cout << "Введите количество сдвигов вправо для массива brr: ";
	//cin >> shifts;
	//ShiftRight(brr, SIZE, shifts);
	//cout << "Массив brr после сдвига вправо на " << shifts << " элементов:" << endl;
	//Print(brr, SIZE);
	cout << delimiter << endl;

	
//Обьявление двумерного массива:
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
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