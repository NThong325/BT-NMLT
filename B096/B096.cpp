#include <iostream>
using namespace std;
float TinhS(int nn)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = sqrt(t + s);
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