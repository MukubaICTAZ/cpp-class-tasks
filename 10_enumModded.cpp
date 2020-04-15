#include <iostream>
using namespace std;

int main()
{
	enum Days {
		Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};
	
	enum Months {
		January, February, March, April, May, June, July, August, September, October, November, December
	};
	
	Days DayOff;
	Months MonthOff;
	int x, y;
	
	cout << "What day would you like off (0-6)?";
	cin >> x;

	
	DayOff = Days(x);
	
	if (DayOff == Sunday || DayOff == Saturday)
	cout << "\nYou're already off on weekends!\n";
	
	else
	cout << "\nOkay, I'll put in the vacation day on\n";
	cout << "Choose your month of the year (0-11)?";
	
	cin >> y;
	MonthOff = Months(y);
	
	if ( MonthOff == January || MonthOff == December)
	cout << "You are already on your annual leave days";
	
	else
	cout << "You have successively aquired a leave day on: " << "Day: " << DayOff + 1 << " Month " << MonthOff + 1 << endl;	return 0;
}
