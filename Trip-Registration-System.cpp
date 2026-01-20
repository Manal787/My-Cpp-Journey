bool IsAgeAccepted(short Age)
{
	return(Age>=10);
}

int main()
{
	short Age;
	cout << "---Trip Registration(5 Seats)---" << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter Age for person" << i << ":" << endl;
		cin >> Age;
		if (IsAgeAccepted(Age))
		{
			cout << "Person" << i << " is registered successfully!" << endl;
		}
		else
		{
			cout << "Error:Age" << Age << " is too young! Registration CANCELLED." << endl;
			break;
		}
	}
	cout << "End of Registration System." << endl;
}
