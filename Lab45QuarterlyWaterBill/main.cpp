#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	float quarterbill, totalquarters = 0.0, average;
	int quarter = 1;
	while (quarter <= 4)
	{
		cout << "Please input your water bill for quarter " << quarter << ": $";
		cin >> quarterbill;
		totalquarters = totalquarters + quarterbill;
		quarter++;
	}
	average = totalquarters / 4 / 3;
	if (average >= 75.0)
		cout << "Your average monthly bill is $" << setprecision(2) << fixed << showpoint << average << ".\nYou are using excessive amounts of water\n";
	else if (average >= 25.0)
		cout << "Your average monthly bill is $" << setprecision(2) << fixed << showpoint << average << ".\nYou are using a tipical amount of water\n";
	else
		cout << "Your average monthly bill is $" << setprecision(2) << fixed << showpoint << average << ".\nCongratulations! You are conserving water!\n";
	system("pause");
}