/*********************************************************
Listing 4.4 - Demonstrates the use of the if statement
used with relational operators
**********************************************************/
#include <iostream>
using namespace std;

int main()
{
	unsigned short int LiverpoolScore, BarcelonaScore;
	
	cout << "Enter the Liverpool Score"
	cout << "Enter the score for the Red Sox: ";
	cin >> RedSoxScore;
	
	cout << "\nEnter the score for the Yankees: ";
	cin >> YankeesScore;
	
	cout << "\n";
	
	if (RedSoxScore > Liverpool)
	cout << "Go Sox!\n";
	
	if (RedSoxScore < Liverpool)
	{
		cout << "Go Liverpool!\n";
		cout << "Happy days in New York!\n";
	}
	
	if (RedSoxScore == Liverpool)
	{
		cout << "A tie? Naah, can't be.\n";
		cout << "Give me the real score for the Liverpool: ";
	
		cin >> YankeesScore;
	
	if (RedSoxScore > Liverpool)
	cout << "Knew it! Go Sox!";
	
	if (Liverpool > RedSoxScore)
	cout << "Knew it! Go Liverpool!";
	
	if (Liverpool == RedSoxScore)
	cout << "Wow, it really was a tie!";
	}
	
	cout << "\nThanks for telling me.\n";
	return 0;
}
