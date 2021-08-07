#pragma once
class Class {
private:
	unsigned int  class_no;
	unsigned  int rollno[max_students_class];
	double fees[4]; // fees maximum amount to store



protected:
	sections section = A;
	void setClass()
	{


		cout << " In which class do you want to study? ";
		cin >> class_no;
		do {
			if (class_no < classes)
			{
				cout << "\n you are applying for class " << class_no << endl;
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
		while (true)
		{
			if (n <= max_students_class && section == A)
			{
				if (n > 4) // change 40 to 4 for testing purpose
				{
					section = B;
					n = 1;
					break;
				}
				else
				{
					section = A;
					n++;


				}

			}
			else  if (n > max_students_class && section == A)
			{
				if (n > 4)
				{
					section = C;
					n = 1;
					break;
				}
				else
				{
					section = B;
					n++;
				}
			}
			else if (n > max_students_class && section == B)
			{
				if (n > 4)
				{
					section = D;
					n = 1;
					break;
				}
				else
				{
					section = C;
					n++;
				}
			}
			else if (n > max_students_class && section == C)
			{
				if (n > 4)
				{
					section = E;
					n = 1;
					break;
				}
				else
				{
					section = D;
					n++;
				}
			}
			else if (n > max_students_class && section == D)
			{
				if (n > 4)
				{
					section = F;
					n = 1;
					break;
				}
				else
				{
					section = E;
					n++;
				}

			}
			else if (n > max_students_class && section == E)
			{
				if (n > 4)
				{
					section = G;
					n = 1;
					break;
				}
				else
				{
					section = F;
					n++;
				}

			}
			else if (n > max_students_class && section == F)
			{
				if (n > 4)
				{

					cout << " you can't get admission now \n sorry , because seats are full  \n";
					cout << " you can take admission in next time . Best of luck \n  \n";

				}
				else
				{
					section = G;
					n++;
				}

			}
			return section;

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

	int getRollNo()
	{
		return rollno[n] = n;
	}


	//

	void payYourFees()
	{
		cout << "Pay your fees first \" 5000 rs \" to get admission \n";
		cout << "Enter amount : ";
		cin >> fees[n];

	}

	//
	void payedFees()
	{
		cout << " Thanks for paying fees : " << fees[n] << endl;
		cout << "\n your admission process is done " << " in class :" << class_no;
		cout << "\n classes start from next week \n ";
		cout << "\n We will happy to see you in class : " << class_no << endl;




	}


	//

};