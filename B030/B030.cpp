#include <iostream>
using namespace std;
float TinhTong(int aa)
{
	float s = 0;
	int i = 2;
	while (i <= (2*aa))
	{
		s = s + (float)1 / i;
		i=i+2;
	}
	return s;
}
int main()
{
	int a;
	cin >> a;
	cout << TinhTong(a);
	return 0;
}
