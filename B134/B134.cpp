#include <iostream>
using namespace std;
bool KiemTra(int x, int y, int z)
{
	if (x <= y && y <= z )
		return true;
	return false;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (KiemTra(x, y, z) == true)
		cout << "BDT dung";
	else
		cout << "BDT sai";
	return 0;
}