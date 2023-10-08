#include <iostream>
using namespace std;
float TinhTong(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}
int main()
{
	int n;
	cin >> n;
	cout << "So uoc so chan:";
	cout << TinhTong(n);
	return 0;
}