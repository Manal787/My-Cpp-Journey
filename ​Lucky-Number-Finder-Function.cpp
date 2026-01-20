#include <iostream>
#include<string>
#include<cmath>
using namespace std;

bool IsLuckyNumber(int Number)
{
	return(Number == 7);
}

int main()
{
	int Number;

	cout << "---Lucky Number Search System---" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Please Enter You Number ?" << endl;
		cin >> Number;

		if (IsLuckyNumber(Number))
		{
			cout << "Lucky Number 7 Found!" << endl;
			break;
		}
		else
		{
			cout << "Try again...." << endl;
		}
		cout << "Program finished." << endl;
	}
}
