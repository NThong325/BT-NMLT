#include <iostream>
using namespace std;
float ChuSo(int);
int main()
{
	int n;
	cin >> n;
	cout << ChuSo(n);
	return 0;
}
float ChuSo(int nn)
{
	return (nn/100) % 10;
}