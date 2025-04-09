#include"Shifts.h"

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
/*void ShiftLeft(int arr[][COLS], const int ROWS, const int COLS, int shifts)
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
}*/
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shifts);
	}*/
	ShiftLeft(arr[0], ROWS * COLS, shifts);
}
void ShiftRight(int arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}
void ShiftRight(double arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
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