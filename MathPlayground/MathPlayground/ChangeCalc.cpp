#include "MainFunctions.h"

//Find Change from Given Amount with Lowest Number of Bills Possible
int ChangeCalculator()
{
	int amount;

	cout << "\n\nEnter a Whole Dollar Total to Convert to Minimum Bills: ";

	cin >> amount;

	//Outputs bill categories
	cout << "$100 Bill(s): " << amount / 100 << "\n";
	amount %= 100;
	cout << "$50 Bill(s): " << amount / 50 << "\n";
	amount %= 50;
	cout << "$20 Bill(s): " << amount / 20 << "\n";
	amount %= 20;
	cout << "$10 Bill(s): " << amount / 10 << "\n";
	amount %= 10;
	cout << "$5 Bill(s): " << amount / 5 << "\n";
	amount %= 5;
	cout << "$1 Bill(s): " << amount << "\n";

	pause();

	return 0;
}