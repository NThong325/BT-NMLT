#include <iostream>
using namespace std;
bool KiemTra(int x, int y,int z)
{
	if (x < y + z && y < x + z && z < x + y)
		return true;
	return false;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (KiemTra(x, y, z) == true)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
	return 0;
}