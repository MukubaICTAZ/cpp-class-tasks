/******************************************************************
Program: COUT
File: 02_Cout.cpp
Function: Main (peform various ways to use the cout function)
Description: Program adds numbers, floats and uses the end line\
             and next line as elements you can add to the cout 
             function.
Author: Chishimba Mukunta
Environment: Dev C++, HP G60 Notebook 3GB RAM, Windows 10 Pro 64bit
AMD Athlon Dual Core
Notes: This is an introductory, sample program.
Revisions: 1.00 10/1/94 (jl) First release
1.01 10/2/94 (jl) Capitalized "World"
********************************************************************/
#include <iostream>
using namespace std;
int main()

{
	cout << "Hello there. \n" ;
	cout << "Here is 5: " << 5 << "\n";
	cout << "The manupulator endl writes a new line to the screen." << endl;
	cout << "Here is a very big number: \t" << 700000 << endl;
	cout << "Here is the sum of 8 and 5 :\t " << 8+5 <<  endl;
	cout << "Here is a fraction: \t\t" << (float) 5/8 << endl;
	cout << "And a very big number: \t" << (double) 7000 * 7000 << endl;
	cout << "Donnot forget to replace Jesse Liberty with your name...\n";
	cout << "Chishimba Mukunta is a C++ programmer! \n";
	
	return 0;
}
