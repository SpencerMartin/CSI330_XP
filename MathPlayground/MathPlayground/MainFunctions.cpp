#include "MainFunctions.h"



//cause why not... avoids system()
void clear()
{
	system("CLS");	//Yeah, yeah, I know...
}

//Pause - Wait for Input to Continue
void pause()
{
	cin.get();
	cin.get();
}

//Main program menu
void MainMenu()
{
	bool exit = false;
	int choice = 0;

	//Persistence loop - execute until -1 is given to exit
	while (exit == false)
	{
		clear();

		cout << endl << endl;

		PrintChoices();

		choice = GetMenuSelection();

		if (choice != -1)
		{
			ExecuteSelection(choice);
		}
		else
		{
			exit = true;
		}

	}

}

//Runs Menu Choice
void ExecuteSelection(int choice)
{
	switch (choice)
	{
		case 1:
			clear();
			if (ChangeCalculator())
			{
				cout << "You broke it";
				pause();
			}
			break;
		case 2:
			clear();
			if (FactorialStart())
			{
				cout << "You broke it";
				pause();
			}
			break;
		default:
			cout << "\nNot a valid menu choice";
			pause();
			break;
	}
}


//Processes Input for Menu Choice
int GetMenuSelection()
{
	string tmp;
	int myInt = 0;
	cin >> tmp;
	stringstream(tmp) << tmp;
	stringstream(tmp) >> myInt;

	return myInt;
}

//Prints Menu Options
void PrintChoices()
{
	//BEGIN LIST OF OPTIONS
	cout << "1. Change Calculator" << endl;
	cout << "2. Factorial" << endl;


	//END LIST OF OPTIONS

	cout << endl << "Enter choice (number): ";
}



