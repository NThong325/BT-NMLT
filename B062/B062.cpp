#include <iostream>
using namespace std;
float TinhTong(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if(dv%2==0)
            s = s + dv;
		t = t / 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << TinhTong(n);
	return 0;
}