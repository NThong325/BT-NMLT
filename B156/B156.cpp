#include <iostream>
#include<iomanip>
using namespace std;
void xuatday(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		cout <<t<<setw(4);
		i = i + 1;
	}
}
int main()
{
	int n;
	cin >> n;
	xuatday(n);
	return 0;
}