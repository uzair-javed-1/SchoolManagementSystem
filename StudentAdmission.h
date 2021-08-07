#pragma once
////////////////////
// for student personal information 
class StudentAdmission : public Class
{
private:
	string fname; //first Name
	string lname; //first Name

	// for student personal information
	int age;
	char gender;
	string sex;
	double phone_no;
	string address;

	// for  previous class marks
	int previousClassMarks;
	int previousClass;
	char passingGrade;

public:
	void setStudentPersonelInformation()
	{
		cout << " Enter your first name : ";
		cin >> fname;
		cout << " Enter your Last name : ";
		cin >> lname;
		cout << " Enter your age : ";
		cin >> age;
		cout << " Enter your gender \"press m for male \" or \" f for female \" : ";
		cin >> gender;

		if (gender == 'm' or gender == 'M')
		{ 
			sex = " Male ";
		}
		else
		{ 
			sex = " Female ";
			}
		cout << " Enter your address  : ";
		getline(cin, address);

		cout << " Enter your phone no or fathers mobile no : ";
		cin >> phone_no;


	}
	//
	void showStudentPersonelInformation()
	{
		cout << "  first name  : " << fname << endl;
		cout << "  Last name  : " << lname << endl;
		cout << "  Age : " << age << endl;
		cout << "  Gender : " << sex << endl;
		cout << "  phone _no : " << phone_no << endl;
		cout << "  Address : " << address << endl;
	}

	////

	void getPreviousRecord()
	{
		cout << " Enter your previous class : ";
		cin >> previousClass;
		cout << " Enter your previous class Marks : ";
		cin >> previousClassMarks;
		cout << " Enter your previous class Grade : ";
		cin >> passingGrade;


	}

	//
	void showPreviousRecord()
	{
		cout << "\nprevious class : " << previousClass;
		cout << " \nEnter your previous class Marks : " << previousClassMarks;
		cout << "\nprevious class Grade : " << passingGrade << endl;

	}



};