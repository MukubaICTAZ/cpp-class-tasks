#include <iostream>
using namespace std;

class Cat 
{
	public:
		int itsAge;
		int itWeight;
};

int main ()
{
	Cat Frisky;
	Frisky.itsAge = 5; // assign to the member variable
	cout << "Frisky is a cat who is ";
	cout << Frisky.itsAge << " Years old. \n";
	
	return 0;
}
