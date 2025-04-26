#include"tempstream.h"
//#include"FillRand.cpp"  //Реализации функция НЕ подключаются на место вызова
#include"constemp.h"
#include"tempprint.h"
#include"temprand.h"
#include"tempsort.h"
#include"tempstat.h"
#include"uniqt.h"
#include"tshifts.h"

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
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

template<typename T>
void Sort(T arr[], const int n)
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
T Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
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
double Average(T arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
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
int MinVal(T arr[], const int n)
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
int MaxVal(T arr[], const int n)
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
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shifts);
	}*/
	ShiftLeft(arr[0], ROWS * COLS, shifts);
}
template<typename T>
void ShiftRight(T arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
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