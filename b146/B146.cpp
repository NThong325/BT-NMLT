#include <iostream>
using namespace std;
void kiemtra(int nn)
{
	int dn = 0;
	int t=nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		cout << "dx";
	else
		cout << "ko dx";
}

int main()
{
	int n;
	cin >> n;
	kiemtra(n);
	return 0;
}