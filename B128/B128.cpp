#include <iostream>
using namespace std;
void LonNhat(int aa, int bb)
{
	if (aa < bb)
	{
		int temp = aa;
		aa = bb;
		bb = temp;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	LonNhat(a, b);
	cout << a <<",";
	cout << b;
	return 0;
}