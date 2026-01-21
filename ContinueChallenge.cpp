bool IsOdd(int Number)
{
	return(Number % 2 != 0);
}

int main()
{
	int Sum = 0;
	int Number = 0;
	cout << "Enter 5 Number to sum only the odd ones:" << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Number[" << i << "]:";
		cin >> Number;
		if (IsOdd(Number))
		{
			cout << "(Even Number skipped!)" << endl;
			continue;
		}
		Sum += Number;
	}
	cout << "___________________\n";
	cout << "The Total Sum of Odd Number is :" << Sum << endl;
}
