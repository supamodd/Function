﻿#include<iostream>
using namespace std;

#define delimiter "\n---------------------------------------------------------\n"

const int ROWS = 4;
const int COLS = 5;

void FillRand(int arr[], const int n);					// Заполняет массив случаныйми числами
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);						// Вывод исходного массива на экран
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);						//Сортировка массива
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);						//Вывод отсортированного массива на экран
double Sum(double arr[], const int n);
double Sum(int arr[][COLS], const int ROWS, const int COLS);

double Average(int arr[], const int n);					//Вывод средне-арифметического значения массива
double Average(double arr[], const int n);
double Avg(int arr[][COLS], const int ROWS, const int COLS);

int MinVal(int arr[], const int n);						//Вывод минимального значения массива
double MinVal(double arr[], const int n);
double MinVal(int arr[][COLS], const int ROWS, const int COLS);

int MaxVal(int arr[], const int n);						//Вывод Максимального значения массива
double MaxVal(double arr[], const int n);
double MaxVal(int arr[][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, int shifts);		//Сдвигает массив в левую сторону
void ShiftLeft(double arr[], const int n, int shifts);
void ShiftLeft(int arr[][COLS], const int ROWS, const int COLS, int shifts);


void ShiftRight(int arr[], const int n, int shifts);	//Сдвигает массив в правую сторону
void ShiftRight(double arr[], const int n, int shifts);
void ShiftRight(int arr[][COLS], const int ROWS, const int COLS, int shifts);

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
		{3,5,8,10,13},
		{13,21,34,45,56},
		{55,89,144,167,23},
		{61,82,115,131,155},
	};
	FillRand(i_arr_2, ROWS, COLS);
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
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++)
	{ 
		for (int j = 0; j < COLS - 1; j++) 
		{ 
			int minIndex = j;
			for (int k = j + 1; k < COLS; k++) 
			{
				if (arr[i][k] < arr[i][minIndex])
				{
					minIndex = k;
				}
			}
			if (minIndex != j) 
			{
				int buffer = arr[i][j];
				arr[i][j] = arr[i][minIndex];
				arr[i][minIndex] = buffer;
			}
		}
	}
}
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
void ShiftLeft(int arr[], const int n, int shifts) 
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
void ShiftLeft(double arr[], const int n, int shifts)
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
void ShiftLeft(int arr[][COLS], const int ROWS, const int COLS, int shifts) 
{
	shifts = shifts % COLS;							// Нормализуем shifts, чтобы избежать лишних сдвигов
	if (shifts < 0) 
	{
		shifts = shifts + COLS;						// Обрабатываем отрицательные сдвиги = сдвиг вправо
	}

	for (int i = 0; i < ROWS; i++)					// Для каждой строки
	{				
		for (int k = 0; k < shifts; k++)			// Выполняем shifts сдвигов влево
		{			
			int temp = arr[i][0];					// Сохраняем первый элемент строки
			for (int j = 0; j < COLS - 1; j++) 
			{
				arr[i][j] = arr[i][j + 1];			// Сдвиг элементов влево в строке
			}
			arr[i][COLS - 1] = temp;				// Помещаем сохраненный первый элемент в конец строки
		}
	}
}
void ShiftRight(int arr[], const int n, int shifts) 
{
	shifts = shifts % n; // Нормализуем shifts
	if (shifts < 0) 
	{
		shifts = shifts + n;
	}
	for (int i = 0; i < shifts; i++) 
	{
		int temp = arr[n - 1];			// Сохраняем последний элемент
		for (int j = n - 1; j > 0; j--) 
		{
			arr[j] = arr[j - 1];		// Сдвигаем элементы вправо
		}
		arr[0] = temp;				
	} 
}
void ShiftRight(double arr[], const int n, int shifts)
{
	shifts = shifts % n; // Нормализуем shifts
	if (shifts < 0)
	{
		shifts = shifts + n;
	}
	for (int i = 0; i < shifts; i++)
	{
		int temp = arr[n - 1];			// Сохраняем последний элемент
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];		// Сдвигаем элементы вправо
		}
		arr[0] = temp;
	}
}
void ShiftRight(int arr[][COLS], const int ROWS, const int COLS, int shifts) 
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
