#include "FT.h"
#include <iostream>
#include <ctime>
#include <time.h>
#include <stdio.h>

void getin( int* const m, const int n)
{
    srand(time(0));
    
    for (int i = 0; i < n; i++)
    {
        int x = rand();
        m[i] = x;
    }
}

void SortBubles(int* m, int n)
{
    cout << endl;
    setlocale(LC_ALL, "Russian");
    cout << "ћассив, сортированный методом пузырьком: " << endl;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++)
        {
            if (m[j] > m[j + 1])
            {
                int foo = m[j];
                m[j] = m[j + 1];
                m[j + 1] = foo;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
    cout << endl;
}

void SortChoose(int* m, int n)
{
    cout << endl;
    setlocale(LC_ALL, "Russian");
    cout << "ћассив, сортированный методом выбора: " << endl;
    int min = 0;
    int buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (m[j] < m[min]) ? j : min;
        if (i != min)
        {
            buf = m[i];
            m[i] = m[min];
            m[min] = buf;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
    cout << endl;
}

void SortStupid(int* m, int n)
{
    cout << endl;
    setlocale(LC_ALL, "Russian");
    cout << "ћассив, сортированный глупой сортировкой: " << endl;
    int i = 0, tmp;
    while (i < n - 1)
    {
        if (m[i + 1] < m[i])
        {
            tmp = m[i];
            m[i] = m[i + 1];
            m[i + 1] = tmp;
            i = 0;
        }
        else i++;
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
    cout << endl;
}

void getout(int* m, int n)
{

    setlocale(LC_ALL, "Russian");
    cout << "ћассив, заполенный произвольными числами: " << endl;
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
    cout << endl;
}
