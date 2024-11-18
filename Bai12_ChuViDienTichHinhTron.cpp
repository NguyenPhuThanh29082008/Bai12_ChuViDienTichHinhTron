// Bai12_ChuViDienTichHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double bankinh, pi, chuvi, dientich;

    cout << "Nhap bankinh: ";  cin >> bankinh;
    cout << "Ta co pi = 3.14\n";
    pi = 3.14;

    cout << "Chu vi hinh tron la: \n";
    chuvi = 2 * pi * bankinh;
    dientich = pi * (bankinh*bankinh);
    cout << "ta co: " << "2*" << pi << "*" << bankinh << "=" << chuvi << endl;
    cout << "ta co: " << pi << "*" << bankinh << "^2" << "=" << dientich << endl;

    system("pause");
    return 0;
}
