#include <iostream>
using namespace std;
float TinhS(int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + t;
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