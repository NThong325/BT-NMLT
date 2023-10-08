#include <iostream>
#include<cmath>
using namespace std;
float Tinhn(int nn)
{
	float at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = at * 5 + 2 * tt - 6 * pp + 12;
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