#include <iostream>
using namespace std;

int main()
{
	int Grade;

	cout << "Please input a grade ";
	cin >> Grade;

	if (Grade >= 60)
	{
		cout << "Congratulations! You passed." << endl;
	}

	else
	{
		cout << "You failed. Try harder next time." << endl;
	}

	return 0;

}