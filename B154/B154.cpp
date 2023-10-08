#include <iostream>
#include<iomanip>
using namespace std;
void xuatday(int nn)
{
	int ahh = nn;
	cout << ahh;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout <<setw(4)<< ahh;
	}
}
int main()
{
	int n;
	cin >> n;
	xuatday(n);
	return 0;
}