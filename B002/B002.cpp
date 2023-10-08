#include<iostream>
#include<cmath>
using namespace std;
float DienTich(float);
int main()
{
    float r;
    cin >> r;
    cout << "Dien tich:";
    cout << DienTich(r);
    return 1;
}
float DienTich(float rr)
{
    return 3.14 * rr * rr;
}
 