#include "header.h"



bool menu()
{
	string input;

	cout << "<< Print Your Own Brian >>\n\n"
		<< "Enter a number to print some Brians,\n"
		<< "a negative number for some nairBs,\n"
		<< "'pi' for 3.14 Brians,\n"
		<< "or append with an 'a' for some fun!"
		<< "(Exit with 'e' or 'E') \n\n";

	cout << "Decision:   ";

	getline(cin, input);

	return checkInput(input);


}

//return false to go back to menu
//return true to exit
bool checkInput(string input)
{
	stringstream ss;
	int option = 0;		//forward, backward, noisy, pi, error
	int value;
	bool again = true;
	
	for (string::iterator it = input.begin(); it != input.end(); ++it)
	{
		if (*it == '-')
		{
			ss << *it;
			option = 1;
		}
		else if (isdigit(*it))
		{
			ss << *it;
		}
		else
		{
			if (*it == 'a')
			{
				option = 2;
			}
			else if (*it == 'p')
			{
				if (*(it + 1) == 'i')
				{
					option = 3;
					++it;
				}
			}
			else if (*it == 'e' || *it == 'E')
			{
				option = 4;
			}
			else
			{
				option = 5;	//errant characters
			}
		}
	}

	ss >> value;

	switch (option)
	{
		case 0:
		{
			cout << printForward(value);
			break;
		}
		case 1:
		{
			cout << printBackward(value);
			break;
		}
		case 2:
		{
			cout << printNoisy(value);
			break;
		}
		case 3:
		{
			cout << printPi();
			break;
		}
		case 4:
		{
			again = false;
			break;
		}
		default:
		{
			cout << "Ya had some kind of errant input there, champ";
		}
	}



	return again;
}


string printBackward(int printNum)
{
	int i;
	string nairb = "llaH nairB ";
	string llah = "";

	for (i = printNum; i < 0; i++)
	{
		llah += nairb;
	}
	llah += "\n";

	return llah;
}


string printForward(int printNum)
{
	int i;
	string brian = "Brian Hall ";
	string hall = "";

	for (i = 0; i < printNum; i++)
	{
		hall += brian;
	}
	hall += "\n";

	return hall;
}


string printNoisy(int printNum)
{
	int i;
	string brian = "Brian Hall ";
	string hall = "";

	for (i = 0; i < printNum; i++)
	{
		hall += brian;
	}
	hall += "\a\n";
	return hall;
}

string printPi()
{
	string hall = "Brian Hall Brian Hall Brian Hall B \n";

	return hall;
}