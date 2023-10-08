#include <iostream>
using namespace std;
float LuyThua(int xx,int nn)
{
	long t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		i++;
	}
	return t;
}
int main()
{
	int x,n;
	cin >> x>>n;
	cout << LuyThua(x,n);
	return 0;
}