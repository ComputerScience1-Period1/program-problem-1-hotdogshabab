/*
Shabab Haque - 9/22 1st
Assignment Name: Display Text

This program displays my full name,
period, and "Hello World
*/

// Libraries
#include <iostream>;
#include <conio.h>;

// Namespaces
using namespace std;

// Functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}

// Main
void main() {
	// Define and Assign your variable(s)
	int period = 1;
	// Display Text
	cout << "Shabab Haque " << period << endl;
	cout << "Hello World!" << endl;
	pause();
}