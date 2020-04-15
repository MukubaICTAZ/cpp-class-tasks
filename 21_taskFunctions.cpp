typedef unsigned short USHORT;
#include <iostream>
#include <cmath>
using namespace std;

//prototype definition
USHORT functionAdd(USHORT firstNumber, USHORT secondNumber);
USHORT functionSubract(USHORT firstNumber, USHORT secondNumber);
USHORT functionDivide(USHORT firstNumber, USHORT secondNumber);
USHORT functionMultiply(USHORT firstNumber, USHORT secondNumber);
USHORT functionModulus(USHORT firstNumber, USHORT secondNumber);
USHORT functionExponent(USHORT firstNumber, USHORT secondNumber);

//function definition


int main()
{

//variable declarationUSHORT firstNumber, secondNumber, sum ;
USHORT difference, quotient, product;
USHORT modulus, exponent;


//accept input

cout << "Enter the first number: ";
cin >> firstNumber;
cout << "Enter the second number: ";
cin >> secondNumber;



//call the functions

sum = functionAdd(firstNumber, secondNumber);
difference = functionSubract(firstNumber, secondNumber);
quotient = functionDivide(firstNumber, secondNumber);
product = functionMultiply(firstNumber, secondNumber);
modulus = functionModulus(firstNumber, secondNumber);
exponent = functionExponent(firstNumber, secondNumber);

//display results
cout << "Your first number is: " << firstNumber;
cout << "\nYour second number is: " << secondNumber << endl;

cout << firstNumber << " + "<< secondNumber<< " = " << sum << endl;
cout << firstNumber << " - "<< secondNumber<< " = " << difference << endl;
cout << firstNumber << " / "<< secondNumber<< " = " << quotient << endl;
cout << firstNumber << " * "<< secondNumber<< " = " << product << endl;
cout << firstNumber << " % "<< secondNumber<< " = " << modulus << endl;
cout << firstNumber << " ^ "<< secondNumber<< " = " << exponent << endl;
return 0;
}

USHORT functionAdd(USHORT n1, USHORT n2)
{
 return n1 + n2 ;
}

USHORT functionSubract(USHORT n1, USHORT n2)
{
 return n1 - n2 ;
}

USHORT functionDivide(USHORT n1, USHORT n2)
{
 return n1 / n2 ;
}

USHORT functionMultiply(USHORT n1, USHORT n2)
{
 return n1 * n2 ;
}

USHORT functionModulus(USHORT n1, USHORT n2)
{
 return n1 % n2 ;
}

USHORT functionExponent(USHORT n1, USHORT n2)
{
 return pow(n1, n2) ;
}
