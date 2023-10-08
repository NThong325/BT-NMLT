#include <iostream>
using namespace std;
float TinhS(int xx,int nn)
{
	float t = xx;
	int i = 1;
	while (i <= xx)
	{
		t = t * (xx + i);
		i = i + 1;
	}
	return t;
}
int main()
{
	int x,n;
	cin >>x>> n;
	cout << "Ket qua:";
	cout << TinhS(x,n);
	return 0;
}