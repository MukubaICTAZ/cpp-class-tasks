/*************************************************************
Name: Chishimba Mukunta
Program: Convert Farienhiet to Degrees Celcius
Description: This program demonstrates the use of local variables
as well as user defined functions.
It should be noted that you can place the variable above or below
the main function. Its placement is irrelevant.
******************************************************************/
#include <iostream>
using namespace std;

 float Convert(float);
 
 float Convert(float TempFer)
 {
 float TempCel;
 TempCel = ((TempFer - 32) * 5) / 9;
 return TempCel;
}

 
 int main()
 
{
float TempFer;
float TempCel;

 cout << "Please enter the temperature in Fahrenheit: ";
 cin >> TempFer;
 TempCel = Convert(TempFer);
 cout << "\nHere's the temperature in Celsius: "; cout << TempCel << endl;
 return 0;
}

 
