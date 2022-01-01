#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct Employee 
{
	int personalID;
	double salary;
	int workExperience;
};//End of Employee struct

struct PersonalInfo 
{
	string fullName;
	string fatherName;
	int iD;
	bool marriageSituation;
	int numberOfchildren;
};//End of PersonalInfo struct

int main()
{
	const int numberOfEmployee = 40;
	Employee employee[numberOfEmployee];
	PersonalInfo employeePersonalInfo[numberOfEmployee];

	for (int i = 0; i < numberOfEmployee; i++)
	{
		cout << "Employee Number " << i + 1 << endl
			<< "--------------------------------" << endl;

		cout << "Please Enter Your Full Name: ";		
		cin.ignore();
		getline(cin , employeePersonalInfo[i].fullName);

		cout << "Please Enter Your father Name:";
		cin.ignore();
		getline(cin, employeePersonalInfo[i].fatherName);

		cout << "What is your current marriage situation (if you are single \nright now you can enter 0 if you are not single enter 1):";
		cin >> employeePersonalInfo[i].marriageSituation;
		
		cout << "How many children do you have:";
		cin >> employeePersonalInfo[i].numberOfchildren;

		cout << "Please Enter Your Personal ID:";
		cin >> employee[i].personalID;

		cout << "Please Enter Your ID:";
		cin >> employeePersonalInfo[i].iD;

		cout << "Please Enter Your salary:";
		cin >> employee[i].salary;

		cout << "Please enter how many years of experience do you have :";
		cin >> employee[i].workExperience;

		cout << endl << endl;

	}//end of for



	//sorte by sallary(low to high)
	double tempt;
	double sortedsalary[numberOfEmployee];
	for (int i = 0; i < numberOfEmployee; i++)
	{
		sortedsalary[i] = employee[i].salary;
	}//End of for

	for (int i = 0; i < numberOfEmployee; i++)
	{
		for (int j = i + 1; j < numberOfEmployee; j++)
		{
			if (sortedsalary[j] < sortedsalary[i])
			{
				tempt = sortedsalary[j];
				sortedsalary[j] = sortedsalary[i];
				sortedsalary[i] = tempt;
			}//End of if
		}//End of second for
	}//End of First for

	//insert sorted array numbers to max array
	int max[numberOfEmployee];
	int z = 0;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		for (int j = 0; j < numberOfEmployee; j++)
		{
			if (sortedsalary[i] == employee[j].salary)
			{
				max[z] = j;
				z++;
			}//End of if
		}//End of second for
	}//End of first for



	//Display sorted by salary(low to high)
	system("cls");
	cout << "Sorted by salary(low to high):" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		cout <<"Full name: " << employeePersonalInfo[max[i]].fullName << endl;
		cout <<"Salary: " << employee[max[i]].salary << " toman" << endl;
		cout <<"Father name: " << employeePersonalInfo[max[i]].fatherName<< endl;
		if(employeePersonalInfo[max[i]].marriageSituation==1)
		cout << "MarriageSituation: " << " Married" << endl;
		else
		cout <<"MarriageSituation: " << "Single" << endl;
		cout <<"Personal ID: " << employee[max[i]].personalID << endl;
		cout <<"ID: " << employeePersonalInfo[max[i]].iD<< endl;
		cout <<"Years of work experience: " << employee[max[i]].workExperience << " years" << endl;
		cout << endl << endl;
	}//End of for
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl << endl;



	//Filter and just show  who have 2 kids and less than  4 milion sallary
	cout << "Filter ,Just show  who have 2 kids and less than  4 milion sallary" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		if (employeePersonalInfo[i].numberOfchildren == 2 && employee[i].salary < 4000000)
		{
			cout << "Full name: " << employeePersonalInfo[i].fullName << endl;
			cout << "Salary: " << employee[i].salary << " toman" << endl;
			cout << "Father name: " << employeePersonalInfo[i].fatherName << endl;
			if (employeePersonalInfo[max[i]].marriageSituation == 1)
				cout << "MarriageSituation: " << " Married" << endl;
			else
				cout << "MarriageSituation: " << "Single" << endl;
			cout << "Personal ID: " << employee[i].personalID << endl;
			cout << "ID: " << employeePersonalInfo[i].iD << endl;
			cout << "Years of work experience: " << employee[i].workExperience << " years" << endl;
			cout << endl << endl;		
		}//End of if
	}//End of for
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl << endl;





	//Filter just show who are single and have more than 5 years work exprience
	cout << "Filter , Just show who are single and have more than 5 years work exprience" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		if (employeePersonalInfo[i].marriageSituation == 0 && employee[i].workExperience>5)
		{
			cout << "Full name: " << employeePersonalInfo[i].fullName << endl;
			cout << "Salary: " << employee[i].salary << " toman" << endl;
			cout << "Father name: " << employeePersonalInfo[i].fatherName << endl;
			if (employeePersonalInfo[i].marriageSituation == 1)
				cout << "MarriageSituation: " << " Married" << endl;
			else
				cout << "MarriageSituation: " << "Single" << endl;
			cout << "Personal ID: " << employee[i].personalID << endl;
			cout << "ID: " << employeePersonalInfo[i].iD << endl;
			cout << "Years of work experience: " << employee[i].workExperience << " years" << endl;
			cout << endl << endl;
		}//End of if
	}//End of for



	return 0;
}//End of main
