#include <iostream>
#include <ctime>
#include "FT.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "������� ���������� �������� �������: ";

    int Max = 0;

    int size = 0;
    
    cin >> size;

    cout << endl;

    int* firstArr = new int[size];

    int* secondArr = new int[size];

    int* thirdArr = new int[size];

    getin(firstArr, size);

    getout(firstArr, size);

    getin(secondArr, size);

    getin(thirdArr, size);
    
    clock_t start1 = clock();
    SortBubles(firstArr, size);
    clock_t stop1 = clock();

    clock_t start2 = clock();
    SortChoose(secondArr, size);
    clock_t stop2 = clock();

    clock_t start3 = clock();
    SortStupid(thirdArr, size);
    clock_t stop3 = clock();

    long double time1 = long double(stop1 - start1);
    long double time2 = long double(stop2 - start2);
    long double time3 = long double(stop3 - start3);

    cout << endl;

    cout << "����� ���������� ���������: " << time1 << "ms" << endl << endl;
    cout << "����� ���������� ������� ������: " << time2 << "ms" << endl << endl;;
    cout << "����� ������ �����������: " << time3 << "ms" << endl<< endl;

    delete[] firstArr;
    delete[] secondArr;
    delete[] thirdArr;
}