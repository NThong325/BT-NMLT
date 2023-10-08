#include <iostream>
using namespace std;
float TinhTong(int aa)
{
	float s = 0;
	int i = 1;
	while (i <= aa)
	{
		s = s + (float)1 / (i * (i + 1));
		i++;
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
