// FuncLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <limits>
#include <numeric>
#include "FuncLib.h"


    static std::mt19937 generator(std::time(0));

    void FillRand(int arr[ROWS][COLS], int minRand, int maxRand)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                arr[i][j] = rand() % (maxRand - minRand) + minRand;
            }
        }
    }

    void FillRand(double arr[ROWS][COLS], double minRand, double maxRand)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                arr[i][j] = rand();
            }
        }
    }

    void Print(int arr[ROWS][COLS])
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

    void Print(double arr[ROWS][COLS])
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

    void ShiftLeft(int arr[ROWS][COLS], int shifts)
    {
        shifts %= (ROWS * COLS);
        if (shifts < 0) shifts += (ROWS * COLS);
        rotate(arr[0], arr[0] + shifts, arr[0] + ROWS * COLS);
    }

    void ShiftLeft(double arr[ROWS][COLS], int shifts) 
    {
        shifts %= (ROWS * COLS);
        if (shifts < 0) shifts += (ROWS * COLS);
        rotate(arr[0], arr[0] + shifts, arr[0] + ROWS * COLS);
    }

    void ShiftRight(int arr[ROWS][COLS], int shifts)
    {
        shifts = shifts % COLS;									
        if (shifts < 0)
        {
            shifts = shifts + COLS;								
        }

        for (int i = 0; i < ROWS; i++)
        {
            for (int k = 0; k < shifts; k++)
            {
                int temp = arr[i][COLS - 1];					 
                for (int j = COLS - 1; j > 0; j--)
                {
                    arr[i][j] = arr[i][j - 1];						
                }
                arr[i][0] = temp;								
            }
        }
    }

    void ShiftRight(double arr[ROWS][COLS], int shifts)
    {
        shifts = shifts % COLS;									
        if (shifts < 0)
        {
            shifts = shifts + COLS;								
        }

        for (int i = 0; i < ROWS; i++)
        {
            for (int k = 0; k < shifts; k++)
            {
                int temp = arr[i][COLS - 1];					
                for (int j = COLS - 1; j > 0; j--)
                {
                    arr[i][j] = arr[i][j - 1];						
                }
                arr[i][0] = temp;								
            }
        }
    }

    void Sort(int arr[ROWS][COLS]) {
        std::sort(arr[0], arr[0] + ROWS * COLS);
    }

    void Sort(double arr[ROWS][COLS]) {
        std::sort(arr[0], arr[0] + ROWS * COLS);
    }

    double Sum2D(int arr[ROWS][COLS]) {
        double sum = 0;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) sum += arr[i][j];
        }
        return sum;
    }

    double Sum2D(double arr[ROWS][COLS]) {
        double sum = 0.0;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) sum += arr[i][j];
        }
        return sum;
    }

    double Average2D(int arr[ROWS][COLS]) {
        double sum = 0;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) sum += arr[i][j];
        }
        return sum / (ROWS * COLS);
    }

    double Average2D(double arr[ROWS][COLS]) {
        double sum = 0.0;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) sum += arr[i][j];
        }
        return sum / (ROWS * COLS);
    }

    double MinVal2D(int arr[ROWS][COLS]) {
        double minVal = std::numeric_limits<double>::max();
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) if (arr[i][j] < minVal) minVal = arr[i][j];
        }
        return minVal;
    }

    double MinVal2D(double arr[ROWS][COLS]) {
        double minVal = std::numeric_limits<double>::max();
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) if (arr[i][j] < minVal) minVal = arr[i][j];
        }
        return minVal;
    }

    double MaxVal2D(int arr[ROWS][COLS]) {
        double maxVal = std::numeric_limits<double>::lowest();
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) if (arr[i][j] > maxVal) maxVal = arr[i][j];
        }
        return maxVal;
    }

    double MaxVal2D(double arr[ROWS][COLS]) {
        double maxVal = std::numeric_limits<double>::lowest();
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) if (arr[i][j] > maxVal) maxVal = arr[i][j];
        }
        return maxVal;
    }

    void Unique(int arr[ROWS][COLS], int minVal, int maxVal) {
        //Todo: implement after you understand the underlying code

    }
