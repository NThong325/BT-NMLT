#include <iostream>
using namespace std;
float TinhS(int nn)
{
	float s = 0;
	float m = 0;
	int i = 1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)1/m;
		i = i + 1;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << TinhS(n);
	return 0;
}