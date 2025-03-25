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
	cout << "������ arr: " << endl;
	const int n = 5;
	int arr[n];
	int shifts;
	FillRand(arr, n);	// ��������� ������ ���������� �������
	Print(arr, n);		// ����� ��������� ������� �� �����
	Sort(arr, n);		//���������� �������
	Print(arr, n);		//����� ���������������� ������� �� �����
	cout << "�����: " << Sum(arr, n) << endl;
	cout << "������-��������������: " << Average(arr, n) << endl;
	cout << "����������� ��������: " << MinVal(arr, n) << endl;
	cout << "������������ ��������: " << MaxVal(arr, n) << endl;
	cout << "������� ���������� ������� ����� ��� ������� arr: ";
	cin >> shifts;
	ShiftLeft(arr, n, shifts);
	cout << "������ arr ����� ������ ����� �� " << shifts << " ���������:" << endl;
	Print(arr, n);
	cout << "������� ���������� ������� ������ ��� ������� arr: ";
	cin >> shifts;
	ShiftRight(arr, n, shifts);
	cout << "������ arr ����� ������ ������ �� " << shifts << " ���������:" << endl;
	Print(arr, n);

	cout << "������ brr: " << endl;
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "�����: " << Sum(brr, SIZE) << endl;
	cout << "������-��������������: " << Average(brr, SIZE) << endl;
	cout << "����������� ��������: " << MinVal(brr, SIZE) << endl;
	cout << "������������ ��������: " << MaxVal(brr, SIZE) << endl;
	cout << "������� ���������� ������� ����� ��� ������� brr: ";
	cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	cout << "������ brr ����� ������ ����� �� " << shifts << " ���������:" << endl;
	Print(brr, SIZE);
	cout << "������� ���������� ������� ������ ��� ������� brr: ";
	cin >> shifts;
	ShiftRight(brr, SIZE, shifts);
	cout << "������ brr ����� ������ ������ �� " << shifts << " ���������:" << endl;
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
	shifts = shifts % n; // ����������� shifts, ����� �������� ������ �������
	if (shifts < 0) {
		shifts = shifts + n; // ������������ ������������� ������
	}

	for (int i = 0; i < shifts; i++) 
	{
		int temp = arr[0];					// ��������� ������ �������
		for (int j = 0; j < n - 1; j++) 
		{
			arr[j] = arr[j + 1];			// ����� ��������� �����
		}
		arr[n - 1] = temp;
	}
}
void ShiftRight(int arr[], const int n, int shifts) 
{
	shifts = shifts % n; // ����������� shifts
	if (shifts < 0) 
	{
		shifts = shifts + n;
	}
	for (int i = 0; i < shifts; i++) 
	{
		int temp = arr[n - 1];			// ��������� ��������� �������
		for (int j = n - 1; j > 0; j--) 
		{
			arr[j] = arr[j - 1];		// �������� �������� ������
		}
		arr[0] = temp;				
	}
}