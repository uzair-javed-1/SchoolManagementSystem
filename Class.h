#pragma once
using namespace std;
class Class {
private:
	unsigned int  class_no;
	unsigned  int rollno;
	double fees; // fees maximum amount to store
	sections section = A;

protected:
	/// for signup
	string login_id;
	char login_password[17];
	string email;

	string login_forgot;
	string email_to_store_password;

	//
	

	public:
		
	void setClass()
	{


		cout << " In which class do you want to study? ";
		cin >> class_no;
		do {
			if (class_no < classes)
			{
				cout << "\n you are applying for class " <<  setw(4) << setiosflags(ios::fixed) << class_no << endl;
				cout << " lets fill application process " << endl;
				break;
			}
			else {

				cout << " you can get admission in only 1 to 10 classes \n ";
				cout << "please choose from 1 to 10 \n ";
				cin >> class_no;
			}



		} while (class_no > classes); // do while loop closed
	}

	//
	int showClass()
	{
		return class_no;
	}

	//
	sections setSection()
	{
	
		
				if (rollno <= 4) // change 40 to 4 for testing purpose
				{
					section = A;
			
				
				}
				else if (rollno <= 8)
				{
					section = B;
				}

					else if (rollno <= 12)
					{
					
					section = C;
				}
					
					else if (rollno <= 16)
				{

					section = D;
				}
					else if (rollno <= 20)
				{

					section = E;
				}
					else if (rollno <= 24)
				{

					section = F;
				}
				else if (rollno<=28)
				{
					section = G;
				}


				return section;

	} //function body

 //



	void showSection()
	{
		if (section == A)
		{
			cout << " A ";
		}
		else if (section == B)
		{
			cout << " B ";
		}
		else if (section == C)
		{
			cout << " C ";
		}
		else if (section == D)
		{
			cout << " D ";
		}
		else if (section == E)
		{
			cout << " E ";
		}
		else if (section == F)
		{
			cout << " F ";
		}
		else if (section == G)
		{
			cout << " G ";
		}
	}

	//



	//

	int getRollNo(int roll_no_user)
	{
		return rollno = roll_no_user;
	}


	//

	void payYourFees()
	{
		cout << "Pay your fees first \" 5000 rs \" to get admission \n";
		cout << "Enter amount : ";
		cin >> fees;

	}

	//
	void payedFees()
	{
		cout << setw(30) << setw(30) << " Thanks for paying fees : " << setw(4) << setprecision(1) << fees << endl;
		cout << setw(30) << "\n your admission process is done in class : " << setw(4) << setiosflags(ios::fixed) << class_no;
		cout << setw(30) << "\n classes start from next week \n ";  
		cout << setw(30) << "\n We will happy to see you in class : "   << setw(4) << setiosflags(ios::fixed) << class_no << endl;


	}

	void signup();
	void forgotPassword();

	//

};

void Class::signup()
{
	login_id = "1421" +  '315' + rollno;
	cout << " Enter your password ";
	cin >> login_password;

	cout << endl << endl;
	cout << " Your Password is  : " << login_password;
	cout << "\n store in the safe place or write it on your dairy  : " << endl;


}


void Class::forgotPassword()
{

	cout << " enter your login id :";
	cin >> login_forgot;
	if (login_id == login_id)
	{
		cout << " enter your email :";
		cin >> email_to_store_password;
		if (email_to_store_password == email)
		{
			signup();
		}
	}

}
