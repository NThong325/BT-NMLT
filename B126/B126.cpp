#include <iostream>
#include<cmath>
using namespace std;
int LonNhat(int aa,int bb)
{
	int lc = aa;
	if (lc < bb)
		lc = bb;
	cout << lc;
	return lc;
}

int main()
{
	int a,b;
	cin >> a>>b;
	cout << "So lon nhat:";
	LonNhat(a, b);
	return 0;
}