#pragma once
using namespace std;

class Signin :private StudentAdmission
{


	//MyClass();
	//~MyClass();

	public:

	void signin()
	{
		cout << " Enter your login id : ";
		cin >> login_forgot;
		cout << " Enter your Password : ";
		cin >> email_to_store_password;
		if (login_forgot == login_id && email_to_store_password == login_password)
		{
			cout << " \n \n Congratulations your are login on page ";

		}

		else
		{
			signup();
		}


		
	}


};

//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
