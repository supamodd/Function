#pragma once

#include <iostream>
using namespace std;

    const int ROWS = 4;
    const int COLS = 5;

void FillRand(int arr[ROWS][COLS], int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], double minRand = 0.0, double maxRand = 100.0);

void Print(int arr[ROWS][COLS]);
void Print(double arr[ROWS][COLS]);

void ShiftLeft(int arr[ROWS][COLS], int shifts);
void ShiftLeft(double arr[ROWS][COLS], int shifts);

void ShiftRight(int arr[ROWS][COLS], int shifts);
void ShiftRight(double arr[ROWS][COLS], int shifts);

void Sort(int arr[ROWS][COLS]);
void Sort(double arr[ROWS][COLS]);

double Sum2D(int arr[ROWS][COLS]);
double Sum2D(double arr[ROWS][COLS]);

double Average2D(int arr[ROWS][COLS]);
double Average2D(double arr[ROWS][COLS]);

double MinVal2D(int arr[ROWS][COLS]);
double MinVal2D(double arr[ROWS][COLS]);

double MaxVal2D(int arr[ROWS][COLS]);
double MaxVal2D(double arr[ROWS][COLS]);

void Unique(int arr[ROWS][COLS], int minVal, int maxVal);
