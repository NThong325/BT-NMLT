#include <iostream>
#include<cmath>
using namespace std;
int ahh, bhh;
void Tinhn(int nn)
{
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = 2 * at + 3 * bt;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
}
int main()
{
	int n;
	cin >> n;
	Tinhn(n);
	cout << "So a:";
	cout << ahh ;
	cout << "\nSo b:";
	cout << bhh;
	return 0;
}