#include <iostream>
using namespace std;
bool check(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		return true;
	return false;
}
int main()
{
	int n;
	cin >> n;
	if (check(n) == true)
		cout << "TT";
	else
		cout << "Ko TT";
	return 0;
}