#include <iostream>
#include<cmath>
using namespace std;
float Tinhn(int nn)
{
	int att = 1;
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
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