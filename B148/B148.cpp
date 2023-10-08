#include <iostream>
using namespace std;
void kiemtra(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "tc";
	else
		cout << "ko tc";
}

int main()
{
	int n;
	cin >> n;
	kiemtra(n);
	return 0;
}