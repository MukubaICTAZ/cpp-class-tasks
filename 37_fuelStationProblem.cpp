/***********************************************************************************
Name: Chishimba Mukunta
Student ID: 18010100 
Name: Thandose Kabwesha
Student ID: 17.........

Task: Fuel Station Problem
Description: This program will enable the user to decide whether they use
             regular, unleaded or super unleaded fuel types. They user will also
			 chose whether to use the car wash or not. There is an output
			 of the amount of fuel chosen bought, the cost of fuel, the cost of the
			 car wash depending on whether they bought fuel above k200. The main
			 techniques implemented are the if-else and nested if-else statements.		
************************************************************************************/
typedef unsigned short int USHORT;
#include <iostream>
using namespace std;

int main() {
	float regularRate = 16.25, unleadedRate = 17.63, superUnleadedRate = 19.5;
 	USHORT fuelOption, carWashYN;
 	float totalAmountFuel, totalAmountPaid, litersOfFuel, amountWash;
 	
 	cout << "********************************************************************" << endl;
 	cout << "************ WELCOME TO PUMA FILLING STATION ***********************" << endl;
 	cout << "***************** Enjoy our services *******************************" << endl;
 	cout << "*********************************************************************"<< endl;
 	
 	cout << "\n";
 	cout << "Choose the type of fuel you want to refill" << endl;
 	cout << " Select 1) for Regular" << endl;
 	cout << " Select 2) for Unleaded" << endl;
 	cout << " Select 3) for Super Unleaded" << endl;
 	cout << " Input Your Option: ";
 	cin  >> fuelOption;
 	cout << "\n";
 	
// 	selection of fuel types
   // regular start
 	if ( fuelOption == 1 ) {
 		cout << "REGULAR FUEL" << endl;
 		cout << "Enter the amount of liters you wish to refuel: " << endl;
 		cin >> litersOfFuel;
 		totalAmountFuel = regularRate * litersOfFuel;
 		cout << "\n";
 		cout << "Do you want your car to be washed?" << endl;
 		cout << "Select 1) for yes " << endl;
 		cout << "Select 2) for no" << endl;
 		cout << "Select Option: ";
 		cin >> carWashYN;
 		cout << "\n"; 
 		
 		if ( carWashYN == 1 ) {
 			if ( totalAmountFuel >= 200) {
 				amountWash = 40;
			 }
			 
			else if ( totalAmountFuel < 200 ) {
				amountWash = 70;
			}
		 }
		 
		 else if( carWashYN == 2 ) {
		 	amountWash = 0;
		 }
		 
		 else {
		 	cout << "invalid option for car wash" << endl;
		 }
		 
		 totalAmountPaid = totalAmountFuel + amountWash;
	 }
	 //regular option end
	 
     // unleaded option start	 
	 else if ( fuelOption == 2 ) {
 		cout << "UNLEADED FUEL" << endl;
 		cout << "Enter the amount of liters you wish to refuel: " << endl;
 		cin >> litersOfFuel;
 		totalAmountFuel = unleadedRate * litersOfFuel;
 		cout << "\n";
 		cout << "Do you want your car to be washed?" << endl;
 		cout << "Select 1) for yes " << endl;
 		cout << "Select 2) for no" << endl;
 		cout << "Select Option: ";
 		cin >> carWashYN;
 		cout << "\n";
 		
 		if ( carWashYN == 1 ) {
 			if ( totalAmountFuel >= 200) {
 				amountWash = 40;
			 }
			 
			else if ( totalAmountFuel < 200 ) {
				amountWash = 70;
			}
		 }
		 
		 else if( carWashYN == 2 ) {
		 	amountWash = 0;
		 }
		 
		 else {
		 	cout << "invalid option for car wash" << endl;
		 }
		 
		 totalAmountPaid = totalAmountFuel + amountWash;
	 }
	 //unleaded option end
	 
     //super unleaded option start	 
	 else if ( fuelOption == 3 ) {
 		cout << "SUPER UNLEADED FUEL" << endl;
 		cout << "Enter the amount of liters you wish to refuel: " << endl;
 		cin >> litersOfFuel;
 		totalAmountFuel = superUnleadedRate * litersOfFuel;
 		cout << "\n";
 		cout << "Do you want your car to be washed?" << endl;
 		cout << "Select 1) for yes " << endl;
 		cout << "Select 2) for no" << endl;
 		cout << "Select Option: ";
 		cin >> carWashYN;
 		cout << "\n";
 		
 		if ( carWashYN == 1 ) {
 			if ( totalAmountFuel >= 200) {
 				amountWash = 40;
			 }
			 
			else if ( totalAmountFuel < 200 ) {
				amountWash = 70;
			}
		 }
		 
		 else if( carWashYN == 2 ) {
		 	amountWash = 0;
		 }
		 
		 else {
		 	cout << "invalid option for car wash" << endl;
		 }
		 
		 totalAmountPaid = totalAmountFuel + amountWash;
	 }
    // super unleaded option end;	 
	 
	 else if ( fuelOption != 1 || fuelOption != 2 || fuelOption != 3 ){
	 	 	cout << "invalid selection for fuel type " << endl;
	 }	 
	 
//	Output 
	 cout << "******************************************************" << endl;
	 cout << "**************** Invoice Statement *******************" << endl;
	 cout << "******************************************************" << endl;
	 cout << "Number of liters of fuel: " << litersOfFuel << endl;
	 cout << "Amount cost of fuel: " << totalAmountFuel << endl;
	 cout << "Car Wash Cost: " << amountWash << endl;
	 cout << "Total Amount Due: " << totalAmountPaid;    	
	 
return 0;
}
