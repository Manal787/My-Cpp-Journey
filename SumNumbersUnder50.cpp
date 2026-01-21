#include<string>
#include<cmath>
using namespace std;


int main()
{
	int Sum = 0;
	int Number = 0;
	for (int  i = 1; i <= 5; i++)
	{
		cout << "Enter a Number:";
		cin >> Number;
		if (Number>50)
		{
			cout << "The Number is greater than 50 and won't be calculated" << endl;
			continue;
		}
		Sum += Number;
	}
	cout << "\nThe Sum is:" << Sum << endl;
}
