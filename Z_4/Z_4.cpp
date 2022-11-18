// Z_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*В двумерном массиве целых числе посчитать:

Сумму всех элементов массива

Среднее арифметическое всех элементов массива

Минимальный элемент

Максимальный элемент
    */
    const int N = 100;
    const int M = 100;
    int arr[N][M], i, j, min, max, sum = 0, count = 0;

    max = min = arr[0][0];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            sum += arr[i][j];
            count++;
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    cout << "Сумма = " << sum << "\nСреднее арифметическое = " << sum / count << "\nMIN = " << min << "\nMAX = " << max;
}

    


