#include <iostream>
using namespace std;
bool kiemtra(int xa, int ya, int xb, int yb, int xc, int yc, int xm, int ym)
{
	double sabc = abs(xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc) * 1 / 2;
	double smab = abs(xa * yb + xb * ym + xm * ya - xb * ya - xm * yb - xa * ym) * 1 / 2;
	double smbc = abs(xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc) * 1 / 2;
	double smca = abs(xa * ym + xm * yc + xc * ya - xm * ya - xc * ym - xa * yc) * 1 / 2;
	if (smab + smbc + smca == sabc)
		return true;
	return false;
}

int main()
{
	int xa, ya, xb, yb, xc, yc, xm, ym;
	cin >> xa >> ya >> xb >> yb >> xc >> yc >> xm >> ym;
	if (kiemtra(xa, ya, xb, yb, xc, yc, xm, ym) == true)
		cout << "M nam trong";
	else
		cout << "M ko nam trong";
	return 0;
}