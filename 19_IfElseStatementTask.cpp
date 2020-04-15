/****************************************************************
Write a program to allow a user to enter three values. The output
should include
1. The maximum value
2. The minimum value
3. The difference between maximum and minimum values.
4. The average of the two numbers 

Note: if we use the if statement determin the maximum and the
minimum numbers.
******************************************************************/
#include <iostream>
using namespace std;

int main()
{
	float firstNumber, secondNumber, largestNumber;
	float smallestNumber, thirdNumber, sum;
	float average;
	
	cout << "Enter the first number: \n";
	cin >> firstNumber;
	cout << "Enter the second number: \n";
	cin >> secondNumber;
	cout << "Enter the third number: \n";
	cin >> thirdNumber;
	
	if ((firstNumber >= secondNumber ) && (firstNumber >= secondNumber))
	{
		largestNumber = firstNumber;
		
		if (secondNumber <= thirdNumber){
			smallestNumber = secondNumber;
		}
			
		else{
			smallestNumber = thirdNumber;
		}
			
			sum = firstNumber + secondNumber + thirdNumber;
			
			cout << "The maximum value you entered was: " << largestNumber << endl;
			cout << "The minumum value you entered was: " << smallestNumber << endl;
			cout << "The difference between between maximum and minimum number is: " << largestNumber - smallestNumber << endl;
			cout << "The average of the values entered is: " << sum / 3 ;
			
	} 
	
	 	else if ((secondNumber >= firstNumber ) && (secondNumber >= thirdNumber))
	{
		largestNumber = secondNumber;
		
		if (firstNumber <= thirdNumber){
			smallestNumber = firstNumber;
		}
			
		else{
			smallestNumber = thirdNumber;
		}
			
			sum = firstNumber + secondNumber + thirdNumber;
			
			cout << "The maximum value you entered was: " << largestNumber << endl;
			cout << "The minumum value you entered was: " << smallestNumber << endl;
			cout << "The difference between between maximum and minimum number is: " << largestNumber - smallestNumber << endl;
			cout << "The average of the values entered is: " << sum / 3 ;
			
	} 
	
	else if ((thirdNumber >= firstNumber) && (thirdNumber >= secondNumber)){
		largestNumber = thirdNumber;
		
		if (firstNumber <= secondNumber){
			smallestNumber = firstNumber;
		}
		
		else {
			smallestNumber = secondNumber;
		}
		
			sum = firstNumber + secondNumber + thirdNumber;
			
			cout << "The maximum value you entered was: " << largestNumber << endl;
			cout << "The minumum value you entered was: " << smallestNumber << endl;
			cout << "The difference between between maximum and minimum number is: " << largestNumber - smallestNumber << endl;
			cout << "The average of the values entered is: " << sum / 3 ;
	}
	
	else if ((firstNumber == secondNumber) && (firstNumber == thirdNumber)) {
		
		sum = firstNumber + secondNumber + thirdNumber;
		
			cout << "All the numbers are equal" << endl;
			cout << "The maximum value you entered was: " << largestNumber << endl;
			cout << "The minumum value you entered was: " << smallestNumber << endl;
			cout << "The difference between between maximum and minimum number is: " << largestNumber - smallestNumber << endl;
			cout << "The average of the values entered: " << sum / 3 ;
	}

return 0;	
}
