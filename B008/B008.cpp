#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
float ChuVi(int, int);
int main()
{
    int n;
    cout << "Nhap n:";
    cin  >> n;
    float r;
    cout << "Nhap r:";
    cin >> r;
    cout << "Chu vi:";
    cout << ChuVi(n,r);
    return 0;
}
float ChuVi(int nn, int rr)
{
    return 2 * nn * rr * sin(M_PI / nn);
}