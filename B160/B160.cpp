#include <iostream>
using namespace std;
void demsl(int nn)
{
	int dt = nn;
	while (dt >= 10)
		dt = dt / 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
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