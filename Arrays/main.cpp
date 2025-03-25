#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double Average(int arr[], const int n);
int MinVal(int arr[], const int n);
int MaxVal(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int shifts);
void ShiftRight(int arr[], const int n, int shifts);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Массив arr: " << endl;
	const int n = 5;
	int arr[n];
	int shifts;
	FillRand(arr, n);	// Заполняет массив случаныйми числами
	Print(arr, n);		// Вывод исходного массива на экран
	Sort(arr, n);		//Сортировка массива
	Print(arr, n);		//Вывод отсортированного массива на экран
	cout << "Сумма: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое: " << Average(arr, n) << endl;
	cout << "Минимальное значение: " << MinVal(arr, n) << endl;
	cout << "Максимальное значение: " << MaxVal(arr, n) << endl;
	cout << "Введите количество сдвигов влево для массива arr: ";
	cin >> shifts;
	ShiftLeft(arr, n, shifts);
	cout << "Массив arr после сдвига влево на " << shifts << " элементов:" << endl;
	Print(arr, n);
	cout << "Введите количество сдвигов вправо для массива arr: ";
	cin >> shifts;
	ShiftRight(arr, n, shifts);
	cout << "Массив arr после сдвига вправо на " << shifts << " элементов:" << endl;
	Print(arr, n);

	cout << "Массив brr: " << endl;
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое: " << Average(brr, SIZE) << endl;
	cout << "Минимальное значение: " << MinVal(brr, SIZE) << endl;
	cout << "Максимальное значение: " << MaxVal(brr, SIZE) << endl;
	cout << "Введите количество сдвигов влево для массива brr: ";
	cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	cout << "Массив brr после сдвига влево на " << shifts << " элементов:" << endl;
	Print(brr, SIZE);
	cout << "Введите количество сдвигов вправо для массива brr: ";
	cin >> shifts;
	ShiftRight(brr, SIZE, shifts);
	cout << "Массив brr после сдвига вправо на " << shifts << " элементов:" << endl;
	Print(brr, SIZE);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
int Sum(int arr[], const int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
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
void ShiftLeft(int arr[], const int n, int shifts) {
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