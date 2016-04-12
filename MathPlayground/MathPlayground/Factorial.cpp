#include "MainFunctions.h"

int FactorialStart()
{
	int input;
	
	cout << "\n\nEnter a number to run factorial on: ";

	cin >> input;

	if (input < 0)
	{
		cout << "\n\nCannot Factorial a Negative Number!" << endl;
	}
	else
		cout << "\n\nFactorial of " << input << " is: " << RunFactorial(input) << endl;

	pause(); 

	return 0;
}


int RunFactorial(int input)
{
	int result = 1;

	if (input == 0)
		result = 1;
	else
	{
		while (input > 0)
		{
			result *= input;
			input--;
		}
	}

	return result;

}