#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

struct Employee {
	string fullName;
	int personalID;
	int iD;
	int salary;
	int workExperience;
};
int main() 
{
	//Make a object for Employee struct 
	const int numberOfEmployee= 40;
	Employee employee[numberOfEmployee];

	//Get Data From User
	for (int i = 0; i < numberOfEmployee; i++) 
	{
		cout << "Employee Number " << i + 1 << endl
		<< "--------------------------------" << endl;

		cout << "Please Enter Your Full Name:";		
		cin >> employee[i].fullName;

		cout << "Please Enter Your Personal ID:";
		cin >> employee[i].personalID;

		cout << "Please Enter Your ID:";
		cin >> employee[i].iD;

		cout << "Please Enter Your salary:";
		cin >> employee[i].salary;

		cout << "Please enter how many years of experience do you have :";
		cin >> employee[i].workExperience;
		
				
		cout << endl << endl;

	}//end of for
	
	//sort name
	string tempt;
	string sortedname[numberOfEmployee];
	for (int i = 0; i < numberOfEmployee; i++)
	{
		sortedname[i] = employee[i].fullName;
	}//End of for
	
	for(int i=0;i< numberOfEmployee;i++)
	{
	for(int j=i+1;j< numberOfEmployee;j++)
	{
	if(sortedname[j]<sortedname[i])
	{
		tempt = sortedname[j];
		sortedname[j] = sortedname[i];
		sortedname[i]=tempt;
	}//End of if
	}//End of second for
	}//End of First for

	//insert sorted array numbers to max array
	int max[numberOfEmployee];
	int z = 0;
	for(int i=0;i< numberOfEmployee;i++)
		for(int j=0;j< numberOfEmployee;j++)
			if(sortedname[i]== employee[j].fullName)
			{
				max[z] = j;
				z++;
			}//End of if
	//Display sorted names
	system("cls");
	cout << "Sorted by names:" << endl << endl << endl;
	for(int i=0;i< numberOfEmployee;i++)
	{
		
		cout<< employee[max[i]].fullName<<endl;
		cout << "------------------------------" << endl;
		cout <<"Personal ID: " << employee[max[i]].personalID << endl;
		cout <<"ID: "<< employee[max[i]].iD << endl;
		cout <<"Years of work of exprience: " << employee[max[i]].workExperience <<" years"<< endl;
		cout <<"Salary: "<< employee[max[i]].salary <<" Toman"<< endl;
		cout << endl << endl;
	}//End of for
	cout << endl << endl;
	cout << "************************************************************"<<endl;
	cout << "************************************************************"<<endl;	
	cout << endl << endl;


	//Display who have less than 3 milion sallary 
	cout << "Sorted by who have less than 3 milion sallary:" << endl << endl << endl;
	for (int i = 0; i < numberOfEmployee; i++) 
	{
		if (employee[max[i]].salary < 3000000) 
		{
			cout << employee[max[i]].fullName << endl;
			cout << "------------------------------" << endl;
			cout << "Personal ID: " << employee[max[i]].personalID << endl;
			cout << "ID: " << employee[max[i]].iD << endl;
			cout << "Years of work of exprience: " << employee[max[i]].workExperience << " years" << endl;
			cout << "Salary: " << employee[max[i]].salary << " Toman" << endl;
			cout << endl << endl;
		}//End of if		
	}//End of for
	cout << endl << endl;
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;
	cout << endl << endl;

	//Display just who work for more than 10 years
	cout << "sorted by just showing who have more than 10 years work Experience"<<endl<<endl;
	for (int i = 0; i < numberOfEmployee; i++)
	{
		if(employee[max[i]].workExperience > 10)
		{
			cout << employee[max[i]].fullName << endl;
			cout << "------------------------------" << endl;
			cout << "Personal ID: " << employee[max[i]].personalID << endl;
			cout << "ID: " << employee[max[i]].iD << endl;
			cout << "Years of work of exprience: " << employee[max[i]].workExperience << " years" << endl;
			cout << "Salary: " << employee[max[i]].salary << " Toman" << endl;
			cout << endl << endl;
		}//End of if

	}//End of for


	return 0;
}//End of main
