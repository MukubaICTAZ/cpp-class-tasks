// Listing 4.5 - demonstrates if statement
// with else clause
#include <iostream>
using namespace std;

int main()
{
int firstNumber, secondNumber, thirdNumber;

// entering the values of the three numbers
cout<< "You will enter three numbers " << endl;
cout << "Enter the first number: ";
cin >> firstNumber;
cout << "\nEnter your second number: ";
cin >> secondNumber;
cout << "\nEnter your third number: ";
cin >> thirdNumber;

if ((firstNumber == secondNumber) && (firstNumber == thirdNumber) && (firstNumber == thirdNumber))
cout << "\nAll the numbers are equal" << endl;

else if ((firstNumber >= secondNumber) && (firstNumber >= thirdNumber))
cout << "\nThe first number "<< firstNumber <<" is the largest number";

else if ((secondNumber >= firstNumber) && (secondNumber >= thirdNumber ))
cout << "\nThe second number " << secondNumber << " is the largest number";

else
cout << "\nThe third number " << thirdNumber << " is the largest number" << endl;

return 0;
}
