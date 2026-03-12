#include <iostream>
#include <fstream>
#include "array_utils.h"

using namespace std;

// зчитування масиву з файлу
void getArray(const char filename[], int arr[], int &n)
{
    ifstream file(filename);

    file >> n;

    for (int i = 0; i < n; i++)
    {
        file >> arr[i];
    }

    file.close();
}

// запис масиву у файл
void saveArray(const char filename[], int arr[], int n)
{
    ofstream file(filename);

    file << n << endl;

    for (int i = 0; i < n; i++)
    {
        file << arr[i] << " ";
    }

    file.close();
}

// ARRAY77
// піднести до квадрату локальні мінімуми
void modifyArray77(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            arr[i] = arr[i] * arr[i];
        }
    }
}

// сортування методом вибору
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
