typedef unsigned long ULONG;
#include <iostream>
using namespace std;

ULONG FindArea(ULONG length, ULONG width); //function prototype

int main()
{
ULONG lengthOfYard;
ULONG widthOfYard;
ULONG areaOfYard;

cout << "\nHow wide is your yard? ";
cin >> widthOfYard;
cout << "\nHow long is your yard? ";
cin >> lengthOfYard;

areaOfYard= FindArea(lengthOfYard,widthOfYard);

cout << "\nYour yard is ";
cout << areaOfYard;
cout << " square feet\n\n";
return 0;
}

ULONG FindArea(ULONG l, ULONG w)
{
 return l * w ;
}
