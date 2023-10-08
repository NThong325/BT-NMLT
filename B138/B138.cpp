#include <iostream>
using namespace std;
float Tinhf(int xx)
{
	int f;
	if (xx >= 0)
	{
		if (xx <= 1)
			f = 5 * xx - 7;
		else
			f = 2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
	}
	else
		f = 2 * xx * xx * xx + 6 * xx + 9;
	return f;
}

int main()
{
	int x;
	cin >> x;
	cout <<Tinhf(x);
	return 0;
}