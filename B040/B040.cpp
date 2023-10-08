#include <iostream>
using namespace std;
float TinhTong(int aa)
{
	float s = 0;
	int i = 1;
	while (i <= aa)
	{
		s = s + i * (i + 1);
		i = i + 1;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << TinhTong(n);
	return 0;
}