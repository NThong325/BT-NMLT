#include <iostream>
using namespace std;
void tinhS(int nn)
{
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = (float)1 / (1 + s);
		i = i + 1;
	}
	cout << s;
}
int main()
{
	int n;
	cin >> n;
	tinhS(n);
	return 0;
}