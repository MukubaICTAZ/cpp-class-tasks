/*************************************************************
Name: Chishimba Mukunta
Program: The program should convert celcius to degres and vise-versa
Description: This program demonstrates the use of local variables
as well as user defined functions.
It should be noted that you can place the variable above or below
the main function. Its placement is irrelevant.
******************************************************************/
#include <iostream>
using namespace std;

//Variable prototype
 float convertToCel(float);
 float convertToFar(float);

//function definition
 float convertToCel(float Far)
{
	float celcius;
   	celcius = ((Far - 32) * 5) / 9;
   	return celcius;
}

float convertToFar(float Cel)
{
	float faren;
	faren = ((Cel * 9) + ( 32 * 5)) / 5;
	return faren;
} 

 int main()
 
{
float tempFar;
float tempCel;
int sel;

 	cout << "What temperature do you want your result to display in? " << endl;
  	
	cout << "Select 1 to convert from celcius to Farhenhiet" << endl;
	cout << "Select 2 to convert from Farhenhiet to Celcius" << endl;

 cin >> sel;
 
 if ( sel == 1) {
 	cout << "Enter the temperature in degrees celcius: ";
 	cin >> tempCel;
	tempFar = convertToFar(tempCel);
 	cout << "\nHere's the temperature in Farhenhiet: " << tempFar << endl;
 }

 else if ( sel == 2) {
 	cout << "Enter the temperature in degrees farhenhiet: ";
 	cin >> tempFar;
	tempCel = convertToCel(tempFar);
 	cout << "\nHere's the temperature in Celsius: "; cout << tempCel << endl;
 }
 
 else if ((sel != 1) || (sel != 2))
 {
 	cout << "Invalid Selection";
 }
 return 0;
}

 
