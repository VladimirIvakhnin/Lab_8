#include <iostream>
#include <windows.h>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    int arr[20];
    int n;

    int matrix[20][20];
    int rows, cols;

    cout << "Зчитування масиву з файлу..." << endl;

    getArray("array_in_13.txt", arr, n);

    modifyArray77(arr, n);

    saveArray("array_out_13.txt", arr, n);

    cout << "Масив оброблено та записано у файл." << endl;


    cout << "\nЗчитування матриці з файлу..." << endl;

    getMatrix("matr_in_13.txt", matrix, rows, cols);

    cout << "\nРезультат Matrix29:" << endl;

    matrix29(matrix, rows, cols);


    cout << "\nСортування масиву методом вибору..." << endl;

    selectionSort(arr, n);

    saveArray("array_sorted_13.txt", arr, n);

    cout << "Відсортований масив записано у файл." << endl;

    return 0;
}
