#include <iostream>
using namespace std;
float LonNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
int main()
{
	int n;
	cin >> n;
	cout << "Chu so lon nhat:";
	cout << LonNhat(n);
	return 0;
}