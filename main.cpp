#include <iostream>
#include <windows.h>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

void task1();
void task2();
void task3();

int main()
{
    SetConsoleOutputCP(65001);

    int choice;

    do
    {
        cout << "\n====== МЕНЮ ======\n";
        cout << "1 - Завдання 1 (Array77)\n";
        cout << "2 - Завдання 2 (Matrix29)\n";
        cout << "3 - Завдання 3 (Сортування)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 0:
            cout << "Завершення програми.\n";
            break;

        default:
            cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    int arr[20];
    int n;

    cout << "\n--- Завдання 1 ---\n";

    getArray("array_in_13.txt", arr, n);

    modifyArray77(arr, n);

    saveArray("array_out_13.txt", arr, n);

    cout << "Результат записано у файл array_out_13.txt\n";
}

void task2()
{
    int matrix[20][20];
    int rows, cols;

    cout << "\n--- Завдання 2 ---\n";

    getMatrix("matr_in_13.txt", matrix, rows, cols);

    matrix29(matrix, rows, cols);
}

void task3()
{
    int arr[20];
    int n;

    cout << "\n--- Завдання 3 ---\n";

    getArray("array_in_13.txt", arr, n);

    selectionSort(arr, n);

    saveArray("array_sorted_13.txt", arr, n);

    cout << "Відсортований масив записано у файл array_sorted_13.txt\n";
}
