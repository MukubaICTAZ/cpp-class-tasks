#include <iostream>
using namespace std;

int main()
{
	unsigned short int TotalSeconds, NumbMinutesToThink,  NumbOfMinutesToType;
	unsigned short int TotalPersons, PersonsAbsent, PersonsInClass, TotalPersonsSeconds, TotalMinutes;
	
	cout << "Enter the number of Persons In class" << endl;
	cin >> PersonsInClass;
	cout << "Enter the number of Persons Absent" << endl;
	cin >> PersonsAbsent;
	cout << "Enter the number of Minutes To Think" << endl;
	cin >> NumbMinutesToThink;
	cout << "Enter the number of Minutes To Type" << endl;
	cin >> NumbOfMinutesToType;
	
	TotalMinutes = NumbMinutesToThink + NumbOfMinutesToType;
	TotalSeconds = TotalMinutes * 60;
	TotalPersons = PersonsInClass + PersonsAbsent;
	TotalPersonsSeconds = TotalPersons * TotalSeconds;
	
	cout << "The total number of minutes to think and type is: " << TotalMinutes << endl;
	cout << "The total number of seconds to think and type is " << TotalSeconds << endl;
	cout << "The total members of the class is: " << TotalPersons << endl;
	cout << "The total number of seconds for typing and thinking for the entire class is: " << TotalPersonsSeconds << endl;
	
	return 0;
}
