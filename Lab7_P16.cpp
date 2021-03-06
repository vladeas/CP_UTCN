/*
>>> Write a C/C++ application that reads from the keyboard a series of integer numbers, until the user
presses on the <Esc>- key. Determine and display the average value of the odd positive numbers.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
using namespace std;

void print();

int main()
{
	print();
	
	system("pause");
	return 0;
}


/*
>>> Repeat a loop until _getch(catches the ESC key from the keyboard), print the average of the positive odd numbers
#Input : -(All the numbers are read in the function)
#Output : -(The result is printed on the screen)
*/
void print()
{
	int x, esc, ct = 0, sum = 0;
	do
	{
		cin >> x;
		if (x >= 0 && x % 2 != 0)
		{
			ct++;
			sum += x;
		}
		esc = _getch();
	} while (!(esc == 27));
	cout << sum / ct << endl;
}
