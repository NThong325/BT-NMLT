#include <iostream>
using namespace std;
float TinhTong(int aa)
{
	float s = 0;
	int i = 1;
	while (i <= (2*aa+1))
	{
		s = s + (float)i /(i + 1);
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