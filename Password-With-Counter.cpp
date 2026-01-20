#include <iostream>
#include<string>
#include<cmath>
using namespace std;


bool IsPasswordCorrect(int EnteredPassword)
{
	int CorrectKey = 9998;
	return(EnteredPassword == CorrectKey);
}

int main()
{
	int Password;
	int Counter = 0;

	while (true)
	{
		cout << "Please Enter Your Password ?\n";
		cin >> Password;

		if (IsPasswordCorrect(Password))
		{

			cout << "Access Granted ! Welcome back" << endl;
			break;
		}
		else
		{
			Counter++;

			if (Counter == 3)
			{
				cout << "Account Locked! Too many attempts" << endl;
				break;
			}
			{
				cout << "Wrong! You have " << (3 - Counter) << "attempts left" << endl;
			}

		}
	}
}

