#include <iostream>
using namespace std;
void giaipt(int a, int b,int c)
{
	int denta = b * b - 4 * a * c;
	float x;
	if (denta <= 0)
	{
		if (denta == 0)
		{
			x = (float)-b / (2 * a);
			cout << x;
		}
		else
			cout << "vo nghiem";
	}
	else
	{
		float x1 = (float)(-b + sqrt(denta)) / (2 * a);
		float x2 = (float)(-b - sqrt(denta)) / (2 * a);
		cout << x1 << x2;
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	giaipt(a,b,c);
	return 0;
}