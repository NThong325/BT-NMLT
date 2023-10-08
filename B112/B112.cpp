#include <iostream>
#include<cmath>
using namespace std;
float TinhS()
{
	float s = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	float e = 1;
	int t = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i - 6)) / t;
		s = s + e;
		i = i + 1;
	}
	return s;
}
int main()
{
	cout << "Ket qua:";
	cout << TinhS();
	return 0;
}