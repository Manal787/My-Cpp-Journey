#include <iostream>
#include<string>
#include<cmath>
using namespace std;

void ShowMenu()
{
	cout << "\n--- Welcome to my Restaurant---" << endl;
	cout << "1.Shawarma(30 SAR)" << endl;
	cout << "2.Burger(45 SAR)" << endl;
	cout << "3.Pizza(50 SAR)" << endl;
	cout << "4. Exit & Get Receipt" << endl;
	cout << "Please enter your Choice" << endl;
}
void ProcessOrder(int Choice, int& TotalBill)
{
	if (Choice == 1)
	{
		cout << "Result:you ordered Shawarma.Enjoy!" << endl;
		TotalBill += 30;
	}
	else if (Choice == 2)
	{
		cout << "Result:you ordered Burger.Enjoy!" << endl;
		TotalBill += 45;
	}
	else if (Choice == 3)
	{
		cout << "Result:you ordered Pizza.Enjoy!" << endl;
		TotalBill += 50;
	}
	else if(Choice != 4)
	{
		cout << "Result: Invalid choice , please try again." << endl;
	}
}
int main()
{
	int Choice;
	int TotalBill = 0;
	do
	{
		ShowMenu();
		cin >> Choice;
		ProcessOrder(Choice, TotalBill);

	} while (Choice!=4);
	cout << "\n----------------------------" << endl;
	cout << "Total Bill = " << TotalBill << " SAR" << endl;
	cout << "Thank you for visiting us!" << endl;
	cout << "----------------------------" << endl;
}


