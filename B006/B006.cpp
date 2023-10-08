#include<iostream>
#include<cmath>
using namespace std;
float DoF(float);
int main()
{
    float c;
    cin >> c;
    cout << "Do F:";
    cout << DoF(c);
    return 1;
}
float DoF(float cc)
{
    return (float)9 / 5 * cc + 32;
}