#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "header.h"
#include "ChangeCalc.h"
#include "Factorial.h"

/*************************************************************************
* Utility and Systems
*************************************************************************/

//Clears Console
void clear();

//Pause - Wait for Input to Continue
void pause();

//Runs Menu Choice
void ExecuteSelection(int choice);

//Processes Input for Menu Choice
int GetMenuSelection();

//Runs the Main Program Menu
void MainMenu();

//Prints Menu Options
void PrintChoices();



#endif