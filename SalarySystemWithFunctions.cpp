bool IsValidSalary(float Salary)
{
	return(Salary > 0);
}

int main()
{
	float TotalSalaries = 0;
	float Salary = 0;
	cout << "Please Enter 5 Salaries:" << endl;
	for (int  i = 1; i <=5 ; i++)
	{
		cout << "Salary of Employee[" << i << "]:";
		cin >> Salary;
		if (IsValidSalary(Salary))
		{
			cout << "(Invalid Salary,skipped!)" << endl;
			continue;
		}
		TotalSalaries += Salary;
	}
	cout << "_____________________\n";
	cout << "Total Valid Salaries :" << TotalSalaries << endl;

}
