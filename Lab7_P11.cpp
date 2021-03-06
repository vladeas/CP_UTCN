/*
>>> Write a program that reads from the keyboard n integer numbers. Display all the odd numbers.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void odd(int n);

int main()
{
	int n;
	cout << "<<< Insert the number of terms : ";
	cin >> n;
	odd(n);
	system("pause");
	return 0;
}


/*
>>> Recursive function, the given integer numbers are not stored
#Input : n (number of integers)
#Output : -(Prints on the screen the result)
*/
void odd(int n)
{
	int x;
	if (n == 0)
		cout << endl;
	if (n != 0)
	{
		cin >> x;
		odd(n - 1);
		if (x % 2 != 0)
			cout << x << "  ";
	}
}
