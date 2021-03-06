/*
>>> Write a program that reads from the keyboard a single character. The program should display that
character on n rows, n times in a row.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void print(int n, char x);

int main()
{
	int n;
	char x;
	cout << "<<< Insert n : ";
	cin >> n;
	cout << "<<< Insert a character : ";
	cin >> x;
	print(n, x);
	system("pause");
	return 0;
}


/*
>>> Similar to printing a matrix(go on lines and columns)
#Input : n(number of columns and lines), x(the character to be printed)
#output : -(The result is printed on the screen)
*/
void print(int n, char x)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << x << "  ";
		cout << endl;
	}
}
