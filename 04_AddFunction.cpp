/**********************************************************************
File: 04_SimpleFunction.cpp
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
***********************************************************************/
#include <iostream>
using namespace std;

int Add (int x, int y)
{
	cout << "In Add (), recieved " << x << " and " << y << "\n" ;
	return (x+y);
}

int Modulo (int x, int y)
{
	cout << "In Modulo (), recieved " << x << " and " << y << "\n" ;
	return (x % y);
}

int main()
{
	cout << "I'm in main () ! \n ";
	
	int a, b, c, d;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	
	cout << "\n Calling Add () \n";
	c= Add(a,b);
	
	cout << "\n Calling Modulo () \n";
	d= Modulo(a,b);
	
	cout << "\n Back in main() . \n";
	cout << "c was set to " << c << endl;
	cout << "d was set to " << d;
	cout << "\n Exiting \n\n";
	
	return 0;
}
