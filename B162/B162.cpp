#include <iostream>
using namespace std;
void kiemtra(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "giam";
	else
		cout << "ko giam";
}
int main()
{
	int n;
	cin >> n;
	kiemtra(n);
	return 0;
}