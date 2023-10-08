#include <iostream>
#include<iomanip>
using namespace std;
void lietke(int xx, int yy)
{
	int n = xx;
	while (n <= yy)
	{
		int dk1 = n % 4;
		int dk2 = n % 100;
		int dk3 = n % 400;
		if (((dk1 == 0) && (dk2 != 0)) || (dk3 == 0))
			cout <<setw(5)<<n;
		n = n + 1;
	}
}

int main()
{
	int x, y;
	cin >> x >> y ;
	lietke(x, y);
	return 0;
}