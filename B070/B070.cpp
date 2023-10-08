#include <iostream>
using namespace std;
float TinhS(int xx,int nn)
{
	float s = 0;
	float t = 1;
	int i = 2;
	while (i<=(2*nn))
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}
int main()
{
	int x,n;
	cin >>x>> n;
	cout << "Ket qua:";
	cout << TinhS(x,n);
	return 0;
}