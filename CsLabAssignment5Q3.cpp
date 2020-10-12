#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Choice, Lenght, Widht, Area, Radius,
		Height, Base;

	float Pi = 3.14159;
	
	//menu outputs
	cout << "1. Calculate the Area of a circle " << endl;
	cout << "2. Calculate the Area of a Rectangle "<<endl;
	cout << "3. Calculate the area of a Triangle "<<endl;
	cout << "4. Quit"<<endl;
	cin >> Choice;

	switch (Choice)
	{
	case 1: 
		if (Choice == 1)
		{
			cout << "What is your radius? ";
			cin >> Radius;

			Area = Pi * (pow(Radius, 2));
			cout << "The area of the circle is: " <<Area;
		}
		break;

	case 2: 
		if (Choice == 2)
		{
			cout << "What the lenght of the rectangle? ";
			cin >> Lenght;

			cout << "What the Widht of the rectangle? ";
			cin >> Widht;

			Area = Lenght * Widht;
			cout << "The area is " << Area;
		}
		break;

	case 3:
		if (Choice == 3)
		{
			cout << "What the base of the triangle? ";
			cin >> Base;

			cout << "What the Height of the triangle? ";
			cin >> Height;

			Area = (Base * Height) / 2;
			cout << "The area is: " << Area;
		}
		break;

	case 4:
		break;
	}

}