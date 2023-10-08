#include <iostream>
using namespace std;
int sodaonguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

int main()
{
	int n;
	cin >> n;
	cout<<sodaonguoc(n);
	return 0;
}