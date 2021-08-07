#pragma once
class Class {
private:
	unsigned int  class_no;
	unsigned  int rollno;
	double fees; // fees maximum amount to store
	sections section = A;
	

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
	void setSection()
	{
	
		while (true)
		{
			if (section == A && rollno <= max_students_class)
			{
				if (rollno > 4) // change 40 to 4 for testing purpose
				{
					section = B;
					rollno = 1;
					break;
				}
				else
				{
					section = A;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;
						break;
					
					}


				}

			}
			else  if ( section == B && rollno <= max_students_class)
			{
				if (rollno > 4)
				{
					section = C;
					rollno = 1;
					break;
				}
				else
				{
					section = B;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;

						break;
					}
				}
			}
			else if (section == B && rollno <= max_students_class)
			{
				if (rollno > 4)
				{
					section = D;
					rollno = 1;
					break;
				}
				else
				{
					section = C;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;

						break;
					}
				}
			}
			else if (section == C && rollno <=  max_students_class )
			{
				if (rollno > 4)
				{
					section = E;
					rollno = 1;
					break;
				}
				else
				{
					section = D;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;
						break;
						
					}
				}
			}
			else if (section == D && rollno <= max_students_class )
			{
				if (rollno > 4)
				{
					section = F;
					rollno = 1;
					break;
				}
				else
				{
					section = E;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;
						break;

					}
					
				}

			}
			else if (section == E && rollno <= max_students_class)
			{
				if (rollno > 4)
				{
					section = G;
					rollno = 1;
					break;
				}
				else
				{
					section = F;
					rollno++;
					if (rollno == 5)
					{
						rollno = 1;
						break;

					}
				}

			}
			else if (section == F && rollno <= max_students_class)
			{
				if (rollno > 4)
				{

					cout << " you can't get admission now \n sorry , because seats are full  \n";
					cout << " you can take admission in next time . Best of luck \n  \n";

				}
				else
				{
					section = G;
					rollno++;
					if (rollno == 5)
					{
						rollno = rollno - 1;
						break;

					}
					
				}

			}
			

		}//for while 

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
		cout << setw(30) << setw(30)<<  " Thanks for paying fees : "  << setw(4) << setiosflags(ios::fixed) << fees<< endl;
		cout << setw(30) << "\n your admission process is done in class : " << setw(4) << setiosflags(ios::fixed) << class_no;
		cout << setw(30) << "\n classes start from next week \n ";  
		cout << setw(30) << "\n We will happy to see you in class : "   << setw(4) << setiosflags(ios::fixed) << class_no << endl;




	}


	//

};