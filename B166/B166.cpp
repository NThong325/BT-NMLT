#include <iostream>
using namespace std;
void tinhS(int nn)
{
	int t = 1;
	int k = 1;
	while ((2 * t) <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	cout << k;
}
int main()
{
	int n;
	cin >> n;
	tinhS(n);
	return 0;
}