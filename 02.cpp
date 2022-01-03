#include<iostream>
#include<conio.h>
#include<string>
using namespace std;



struct WorkingInformation
{
	int personalID;
	double salary;
	int workExperience;
};//End of WorkingInformation struct

struct PersonalInfo
{
	string fullName;
	string fatherName;
	int iD;
	bool marriageSituation;
	int numberOfchildren;
};//End of PersonalInfo struct

struct Employee
{
	struct WorkingInformation WI;
	struct PersonalInfo PI;
};//End of struct employee


int main()
{
	const int numberOfEmployee = 4;
	 Employee employee[numberOfEmployee];

	for (int i = 0; i < numberOfEmployee; i++)
	{
		cout << "Employee Number " << i + 1 << endl
			<< "--------------------------------" << endl;

		cout << "Please Enter Your Full Name: ";		
		cin.ignore();
		getline(cin , employee[i].PI.fullName);

		cout << "Please Enter Your father Name:";
		cin.ignore();
		getline(cin, employee[i].PI.fatherName);

		cout << "What is your current marriage situation (if you are single \nright now you can enter 0 if you are not single enter 1):";
		cin >> employee[i].PI.marriageSituation;
		
		cout << "How many children do you have:";
		cin >> employee[i].PI.numberOfchildren;

		cout << "Please Enter Your Personal ID:";
		cin >> employee[i].WI.personalID;

		cout << "Please Enter Your ID:";
		cin >> employee[i].PI.iD;

		cout << "Please Enter Your salary:";
		cin >> employee[i].WI.salary;

		cout << "Please enter how many years of experience do you have :";
		cin >> employee[i].WI.workExperience;

		cout << endl << endl;

	}//end of for



	//sorte by sallary(low to high)
	double tempt;
	double sortedsalary[numberOfEmployee];
	for (int i = 0; i < numberOfEmployee; i++)
	{
		sortedsalary[i] = employee[i].WI.salary;
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
			if (sortedsalary[i] == employee[j].WI.salary)
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
		cout <<"Full name: " << employee[max[i]].PI.fullName << endl;
		cout <<"Salary: " << employee[max[i]].WI.salary << " toman" << endl;
		cout <<"Father name: " << employee[max[i]].PI.fatherName<< endl;
		if(employee[max[i]].PI.marriageSituation==1)
		cout << "MarriageSituation: " << " Married" << endl;
		else
		cout <<"MarriageSituation: " << "Single" << endl;
		cout <<"Personal ID: " << employee[max[i]].WI.personalID << endl;
		cout <<"ID: " << employee[max[i]].PI.iD<< endl;
		cout <<"Years of work experience: " << employee[max[i]].WI.workExperience << " years" << endl;
		cout << endl << endl;
	}//End of for
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl << endl;



	//Filter and just show  who have 2 kids and less than  4 milion sallary
	cout << "Filter ,Just show  who have 2 kids and less than  4 milion sallary" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		if (employee[i].PI.numberOfchildren == 2 && employee[i].WI.salary < 4000000)
		{
			cout << "Full name: " << employee[i].PI.fullName << endl;
			cout << "Salary: " << employee[i].WI.salary << " toman" << endl;
			cout << "Father name: " << employee[i].PI.fatherName << endl;
			if (employee[max[i]].PI.marriageSituation == 1)
				cout << "MarriageSituation: " << " Married" << endl;
			else
				cout << "MarriageSituation: " << "Single" << endl;
			cout << "Personal ID: " << employee[i].WI.personalID << endl;
			cout << "ID: " << employee[i].PI.iD << endl;
			cout << "Years of work experience: " << employee[i].WI.workExperience << " years" << endl;
			cout << endl << endl;		
		}//End of if
	}//End of for
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl << endl;





	//Filter just show who are single and have more than 5 years work exprience
	cout << "Filter , Just show who are single and have more than 5 years work exprience" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		if (employee[i].PI.marriageSituation == 0 && employee[i].WI.workExperience>5)
		{
			cout << "Full name: " << employee[i].PI.fullName << endl;
			cout << "Salary: " << employee[i].WI.salary << " toman" << endl;
			cout << "Father name: " << employee[i].PI.fatherName << endl;
			if (employee[i].PI.marriageSituation == 1)
				cout << "MarriageSituation: " << " Married" << endl;
			else
				cout << "MarriageSituation: " << "Single" << endl;
			cout << "Personal ID: " << employee[i].WI.personalID << endl;
			cout << "ID: " << employee[i].PI.iD << endl;
			cout << "Years of work experience: " << employee[i].WI.workExperience << " years" << endl;
			cout << endl << endl;
		}//End of if
	}//End of for



	return 0;
}//End of main
