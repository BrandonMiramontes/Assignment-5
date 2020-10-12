#include <iostream>
using namespace std;

int main()
{
	int booksPurchased, pointsEarned;

	cout << "How much books have you purchased: ";
	cin >> booksPurchased;

	if (booksPurchased== 0)
	{
		pointsEarned = 0;
		cout << "Points earned: " << pointsEarned;
	}

	if (booksPurchased == 1)
	{
		pointsEarned = 5;
		cout << "Points earned: " << pointsEarned;
	}

	if(booksPurchased==2)
	{
		pointsEarned = 15;
		cout << "Points earned: " << pointsEarned;
	}

	if (booksPurchased == 3)
	{
		pointsEarned = 30;
		cout << "Points earned: " << pointsEarned;
	}

	if (booksPurchased >= 4)
	{
		pointsEarned = 50;
		cout << "Points earned: " << pointsEarned;
	}

	return 0;
}
