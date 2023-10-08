#include <iostream>
#include<cmath>
using namespace std;
float Tinhn(int nn)
{
	int at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << Tinhn(n);
	return 0;
}