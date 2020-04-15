#include <iostream>
using namespace std;

float functionCtoF( float farenheit );
float functionFtoC( float celsius );


float functionFtoC( float TempFar ) {
	float celT;
	celT = (( TempFar + 32 ) * 5) / 9;
    return celT;
}

float functionCtoF( float TempCel ) {
	float farenT;
	farenT = (( TempCel - 32 ) * 5) / 9;
    return farenT;
}

int main()
{
    short int UserChoice;
    float CelsiusTemp, FarenheitTemp;
	float result;
	
	cout << "A basic program to convert temperatures" << endl;
	cout << "Enter Your Choice" << endl;
	cout << " 1) To convert farenhiet to celcius" << endl;
	cout << " 2) To convert celsius to farenhiet" << endl;
	
	cout << "\n";
	cout << "Enter Your Choice: ";
	cin >> UserChoice;
	cout << "\n";
	
	if ( UserChoice == 1) {
		cout << "Enter the farenheit temperature: " << endl;
		cin >> FarenheitTemp;
		result = functionFtoC(FarenheitTemp);
		cout << "The temperature in Celcius is: " << result << endl;
	}
	
	else if (UserChoice == 2) {
		cout << "Enter the celsius temperature: " << endl;
		cin >> CelsiusTemp;
		result = functionCtoF(CelsiusTemp);
		cout << "The temperature in Farenheit is: " << result << endl;
	}
	
	else {
		cout << "Invalid Entry" << endl;
	}
}
