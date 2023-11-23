#include<iostream>
using namespace std;
int main()
{
	int currentsalary,increment,rating,years;
	int increased_salary;
	double bonuspercentage,increasedamount;
	cout << "Enter your salary :"<<endl;
	cin >> currentsalary;
	cout << "Yearly increment percentage :"<<endl;
	cin >> increment;
	cout << "Performance based increment percentage :"<<endl;
	cin >> bonuspercentage;
	cout << "Enter your employ rating (2 for good , 1 otherwise) :"<<endl;
	cin >> rating;
	cout << "Number of years :"<<endl;
	cin >> years;
	for (int k = 1; k <= years; k++)
	{
		increasedamount = currentsalary * (bonuspercentage / 100);
		currentsalary = currentsalary + increment;;
		if (rating == 2)
		{
			double bonus = currentsalary * (20 / 100);
			currentsalary = currentsalary + bonus;
		}
		cout << "User's salary after year"<< k << " :" << currentsalary<<endl;
	}
	return 0;
}