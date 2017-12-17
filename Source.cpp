#include <iostream>
#include <conio.h>	
#include <string>
#include <stdlib.h>
using namespace std;

int f1(int a, int b, int c) {
	int D;
	D = b * b - 4 * a * c;
	if (D < 0) {
		cout << "This function doesn`t have an X\n";
	}
	else {
		if (D == 0) {
			int x;
			x = (-1 * b) / 2;
			cout << "The solution is " << x << ".\n";
		}
		else {
			int x1, x2;
			x1 = (-1 * b + sqrt(D)) / (2 * a);
			x2 = (-1 * b - sqrt(D)) / (2 * a);
			cout << "First solution is " << x1 << ".\n";
			cout << "Second solution is " << x2 << ".\n";
		}
	}
	cout << "To start again press any key\n";
	cout << "To Exit press Esc\n";
	return 0;
}

#define ESC 27

int main() {
	cout << "Hello! Welcome to Quadratic function calculator\n";
	cout << "To start press any key\n";
	cout << "To Exit press Esc\n";

	char key = _getch();
	int value = key;

	while (value != ESC) {
		system("cls");
		int a, b, c;
		cout << "(a)*X^2 + (b)*X + (c) = 0\n";
		cout << "Enter a: ";
		cin >> a;
		system("cls");
		cout << "(" << a << ")*X^2 + (b)*X + (c) = 0\n";
		cout << "Enter b: ";
		cin >> b;
		system("cls");
		cout << "(" << a << ")X^2 + (" << b << ")*X + (c) = 0\n";
		cout << "Enter c: ";
		cin >> c;
		system("cls");
		cout << "(" << a << ")X^2 + (" << b << ")*X + " << "(" << c << ")" << " = 0\n";
		f1(a, b, c);

		key = _getch();
		value = key;
	}
	/* Here is where we clear the screen */	
	system("cls");
	return 0;
}