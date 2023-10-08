#include <iostream>
using namespace std;
void kiemtra(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "la dang";
	else
		cout << "ko la dang";
}
int main()
{
	int n;
	cin >> n;
	kiemtra(n);
	return 0;
}