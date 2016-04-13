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


}




