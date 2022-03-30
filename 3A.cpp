// 3A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
 struct phanso
{
	int tu;
	int mau;
};

int ucln(int x, int y)
{
	x = abs(x);
	y = abs(y);
	if (x == 0 || y == 0)
		return x + y;
	if (x > y)
		return ucln(x - y, y);
	else
		return ucln(x, y - x);
}
void rutgon(phanso& x)
{
	int b = ucln(x.tu, x.mau);
	x.tu = x.tu / b;
	x.mau = x.mau / b;
}
int main()
{
	phanso x;
	cin >> x.tu >> x.mau;
	if (x.mau == 0) {
		cout << "Khong thoa yeu cau bai toan";
	}
	else {
		rutgon(x);
		cout << x.tu << "/" << x.mau;
	}
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
