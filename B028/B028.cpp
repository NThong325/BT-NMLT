#include <iostream>
using namespace std;
float TinhTong(int aa)
{
	int s = 0;
	int i = 1;
	while (i <= aa) 
	{
		s = s + i * i;
		i++;
	}
	return s;
}
int main()
{
	int a;
	cin >> a ;
	cout << TinhTong(a);
	return 0;
}
