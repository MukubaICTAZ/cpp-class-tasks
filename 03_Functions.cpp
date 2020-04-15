/************************************************************************
Program: Function Example
File: 03_Functions.cpp
Function: Main (calls the user defined function, executes it and returns to main function)
Description: This program shows how you can call function within the main function
             the called function executes then goes to the line right after the 
             function call.
Author: Chishimba Mukunta
Environment: Dev C++, HP G60 Notebook 3GB RAM, Windows 10 Pro 64bit
AMD Athlon Dual Core
Notes: This is an introductory, sample program on functions.
*************************************************************************/
#include <iostream>
using namespace std;

//function Demonstration Function
//prints out a useful message

void DemonstrationFunction ()
{
	cout << "In demonstration function \n ";
}

//funtion main - prints out a message, then 
//calls DemonstrationFuntion, then prints out
//a second message.

int main()
{
	cout << "In main \n " ;
	DemonstrationFunction ();
	cout << "Back in main \n";
	return 0;
}
