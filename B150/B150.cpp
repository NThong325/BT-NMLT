#include <iostream>
using namespace std;
void timbcnn(int aa,int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int bcnn = (abs(aa * bb)) / (m + n);
	cout << bcnn;
}

int main()
{
	int a, b;
	cin >> a >> b;
	timbcnn(a,b);
	return 0;
}