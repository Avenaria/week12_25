#include <iomanip>
#include<algorithm>
#include <iostream>
#include <conio.h>
#include <windows.h>




using namespace std;
// вычесление  года.
bool LeapYear(int year)
{
    bool res = false;
    return (year % 4 != 0 || ((year % 100 == 0) && (year % 400 != 0))) ? false : true;
    return res;
}
//Дни 
int date(int d, int m, int y) {
    int k = d;
    switch (m - 1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: if (LeapYear(y)) k += 29; else k += 28;
    case  1: k += 31;
    }
    k += (y - 1) * 365 + ((y - 1) / 4);
    return k;
}
// разница
int difference(int d1, int d2, int m1, int m2, int y1, int y2) {

    int k = date(d1, m1, y1) - date(d2, m2, y2);
    return k;
}

// среднее арифмет 
const int SIZE = 10;
int arithmetic_mean(int arr[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum += arr[i][j];
        }
    }
    return sum/(SIZE*SIZE);
}
void completion (int arr[SIZE][SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = rand() % 50;
        }
    }
}
//>0; 0< =0;
void null(int arr[SIZE]) {
    int pozitiv;
    int negativ;
    int nul;
    for (int i = 0; i < SIZE; i++) {
        arr[i]= rand() % 50;
        if (arr[i] > 0) {
            pozitiv++;
        }
        else if (arr[i] < 0) {
            negativ++;
        }
        else nul++;
    }
    cout << "Положительных  " << pozitiv<< endl;
    cout << "Отрицательных  " << negativ<< endl;
    cout << "равных 0  " << nul<< endl;
}

int main()
{
    int d1, d2, m1, m2, y1, y2;
    cin >> d1;
    cin >> m1;
    cin >> y1;
    cin >> d2;
    cin >> m2;
    cin >> y2;
    cout << "Difference between dates : " << difference(d1, d2, m1, m2, y1, y2);



  
}

