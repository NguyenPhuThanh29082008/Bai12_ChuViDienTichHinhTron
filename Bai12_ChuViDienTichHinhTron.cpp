// Bai12_ChuViDienTichHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
    double bankinh, chuvi, dientich;

    cout << "Tinh Dien Tich Va Chu Vi Hinh Tron\n";
    cout << "Nhap bankinh: ";  cin >> bankinh;

    cout << "Chu vi hinh tron la: \n";
    chuvi = 2 * M_PI * bankinh;
    dientich = M_PI * (bankinh*bankinh);
    cout << "ta co: " << "2*" << M_PI << "*" << bankinh << "=" << chuvi << endl;
    cout << "ta co: " << M_PI << "*" << bankinh << "^2" << "=" << dientich << endl;

    system("pause");
    return 0;
}
