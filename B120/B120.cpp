#include <iostream>
#include<cmath>
using namespace std;
float TinhS(int nn)
{
	int at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = 5 * at + (float)sqrt(24 * at * at - 8);
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
	cout << TinhS(n);
	return 0;
}