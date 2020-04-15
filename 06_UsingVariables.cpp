#include <iostream>
using namespace std;

int main()
{
	unsigned short int Width;
	unsigned short int Length;
	unsigned short int Area;
	unsigned short int Perimeter;
	unsigned short int Height;
	unsigned short int Volume;
	unsigned short int Temp;
	
	
	cout<< " Enter the Lenth: ";
	cin >> Length;
	cout<< "\n Enter the Width: ";
	cin >> Width;
	cout << "\nEnter the Height: ";
	cin >> Height;
	
	
	Area = Width * Length;
	Temp = Length + Width;
	Perimeter = 2 * Temp;
	Volume = Length * Width * Height;
	
	cout << "\nArea of one surface is: " << Length << endl;
	cout << "Perimeter of one surface is: " << Perimeter << endl;
	cout << "Volume of the object is: " << Volume << endl;
	
	return 0;
}
