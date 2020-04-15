#include <iostream>
using namespace std;

float pricePerSqrCM (float price, float area);

float pricePerSqrCM (float price, float area){
	float result;
	result = price / area;
	return result;
}

int main (){
	float costOfPizza, radiusOfPizza, pricePerSquareCM, cost;
	float diameterOfPizza, areaOfPizza;
	
	cout << " Pizza Calculating Program" << endl;
	cout << "\n" << endl;
	
	cout << "Enter the Size Of the Pizza by Diameter: ";
	cin >> radiusOfPizza;
	cout << "\n";
	
	cout << "Enter the cost of the Pizza: ";
	cin >> cost;
	cout << "\n";
	
	radiusOfPizza = diameterOfPizza / 2;
	areaOfPizza = 3.143 * radiusOfPizza * radiusOfPizza;
	
	pricePerSquareCM = pricePerSqrCM(cost, areaOfPizza);
	
	cout << "The price of the pizza is K " << pricePerSquareCM << " per square CM" << endl;
	
	return 0;
	
}
