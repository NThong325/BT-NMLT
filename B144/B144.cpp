#include <iostream>
using namespace std;
void kiemtra(int nn)
{
	int dem = 0;
	int i=1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "nt";
	else
		cout << "ko nt";
}

int main()
{
	int n;
	cin >> n;
	kiemtra(n);
	return 0;
}