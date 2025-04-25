#pragma once
#ifndef FUNCLIB_H
#define FUNCLIB_H

#ifdef FUNCLIB_EXPORTS
#define FUNCLIB_API __declspec(dllexport)
#else
#define FUNCLIB_API __declspec(dllimport)
#endif

#include <iostream>
using namespace std;

    const int ROWS = 4;
    const int COLS = 5;

    FUNCLIB_API void FillRand(int arr[ROWS][COLS], int minRand = 0, int maxRand = 100);
    FUNCLIB_API void FillRand(double arr[ROWS][COLS], double minRand = 0.0, double maxRand = 100.0);

    FUNCLIB_API void Print(int arr[ROWS][COLS]);
    FUNCLIB_API void Print(double arr[ROWS][COLS]);

    FUNCLIB_API void ShiftLeft(int arr[ROWS][COLS], int shifts);
    FUNCLIB_API void ShiftLeft(double arr[ROWS][COLS], int shifts);

    FUNCLIB_API void ShiftRight(int arr[ROWS][COLS], int shifts);
    FUNCLIB_API void ShiftRight(double arr[ROWS][COLS], int shifts);

    FUNCLIB_API void Sort(int arr[ROWS][COLS]);
    FUNCLIB_API void Sort(double arr[ROWS][COLS]);

    FUNCLIB_API double Sum2D(int arr[ROWS][COLS]);
    FUNCLIB_API double Sum2D(double arr[ROWS][COLS]);

    FUNCLIB_API double Average2D(int arr[ROWS][COLS]);
    FUNCLIB_API double Average2D(double arr[ROWS][COLS]);

    FUNCLIB_API double MinVal2D(int arr[ROWS][COLS]);
    FUNCLIB_API double MinVal2D(double arr[ROWS][COLS]);

    FUNCLIB_API double MaxVal2D(int arr[ROWS][COLS]);
    FUNCLIB_API double MaxVal2D(double arr[ROWS][COLS]);

    FUNCLIB_API void Unique(int arr[ROWS][COLS], int minVal, int maxVal);

#endif