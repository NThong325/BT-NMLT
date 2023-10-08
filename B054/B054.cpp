#include <iostream>
using namespace std;
float TinhTong(int nn)
{
	int s = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 2;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << TinhTong(n);
	return 0;
}