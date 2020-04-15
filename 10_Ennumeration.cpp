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
	cout << "Choose your month of the year (0-11)?";
	cin >> y;
	
	DayOff = Days(x);
	MonthOff = Months(y);
	
	if (DayOff == Sunday || DayOff == Saturday)
	and if ( MonthOff == January || MonthOff == December)
	cout << "You are already on leave days"; 
	
	else
	cout << "You have successively aquired a leave day on: " << endl;
	cout <<"Day "<< DayOff + 1 << " Month: " << MonthOff + 1 << endl;
	return 0;
}
