#include <iostream>
using namespace std;
void demsl(int nn)
{
	int lc = nn % 10;
	int t = nn;
	int dem = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	cout << dem;
}
int main()
{
	int n;
	cin >> n;
	demsl(n);
	return 0;
}