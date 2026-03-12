#include <iostream>
#include <fstream>
#include "matrix_utils.h"

using namespace std;

// зчитування матриці з файлу
void getMatrix(const char filename[], int matrix[20][20], int &rows, int &cols)
{
    ifstream file(filename);

    file >> rows >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            file >> matrix[i][j];
        }
    }

    file.close();
}

// MATRIX29
// у кожному рядку визначити кількість елементів,
// менших за середнє арифметичне рядка
void matrix29(int A[20][20], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        double sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum += A[i][j];
        }

        double avg = sum / cols;

        int count = 0;

        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] < avg)
            {
                count++;
            }
        }

        cout << "Рядок " << i + 1 << ": " << count << endl;
    }
}
