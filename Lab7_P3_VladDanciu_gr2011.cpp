#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int power(int a, int n);

int main()
{
	int a=2,n;
	cout << "<<< Insert the power : ";
	cin >> n;
	cout << ">>> The power of a^n is " << power(a, n) << endl;
	system("pause");
}

int power(int a, int n)
{
	int p = 1;
	for (int i = 0; i < n; i++)
		p *= a;
	return p;
}