// SchoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <string>
using namespace std;
const unsigned int max_students_class = 40;
enum sections {A,B,C,D,E,F,G};
enum your_classes { one, two, three, four, five, sex, seven, eight, nine, ten };
const unsigned int classes = 10;
enum subjects {English,Urdu,Math,Chemistry,Computer,Drawing,Pysics,GeneralScience};
const unsigned int totalMarks=100;
int n = 0;
int size_max = 30;

////////////////////////



void printSteric() // to print steric
{
    for (int j = 0; j < 45; j++)
        cout << "*";
    cout << endl;
}
////////////////////////
void printdash() // to print dashes
{
    for (int j = 0; j < 45; j++)
        cout << "-";
    cout << endl;
}
////////////////////////    

void clear_screen()
{
#if defined(WIN32)||defined(_WIN32)||defined(WIN86)
    system("clear");
 

  #endif    defined(WIN64)||defined(_WIN64)
    system("clear");
    
    
    system("clear");

cout<<"";
}


/////

    class Class {
    private: 
        unsigned int  Class;
        unsigned  int rollno[max_students_class];
        double fees[max_students_class]; // fees for per student in a class

        
        
    public:
        sections section =A;
        void setClass()
        {
           

                cout << " In which class do you want to study? ";
                cin >> Class;
                do {
                if (Class < classes)
                {
                    cout << "\n you are applying for class " << Class <<endl;
                    cout << " lets fill application process " <<endl;
                    break;
                }
               else {
                    cout << " you can get admission in only 1 to 10 classes \n ";
                    cout << "please choose from 1 to 10 \n ";
                    cin >> Class;            
                }
              
              

            } while (Class > classes); // do while loop closed
        }

        //
        int showClass()
        {
            return Class;
        }

        //
        sections setSection()
        {
            while (true)
            {
            if (n <= max_students_class && section == A)
            {
                n++;
                if(n>40)
                {
                    section = B;
                    n = 0;
                    break;
                    return section;
                }
                else
                { 
                section = B;
                
                rollno[n++] = n;
                return section;
                }

            }
            if (n > max_students_class && section == A)
            {
                n++;
                if (n > 40)
                {
                    section = C;
                    n = 0;
                    return section;
                    break;
                }
                else
                section = B;
                return section;

            }
            else if (n > max_students_class && section == B)
            {
                n++;
                if (n > 40)
                {
                    section = D;
                    n = 0;
                    return section;
                    break;
                }
                else
                section = C;
                return section;

            }
            else if (n > max_students_class && section == C)
            {
                n++;
                if (n > 40)
                {
                    section = E;
                    n = 0;
                    return section;
                    break;
                }
                else
                section = D;
                return section;
            }
            else if (n > max_students_class && section == D)
            {
                n++;
                if (n > 40)
                {
                    section = F;
                    n = 0;
                return section;
                    break;
                }
                else
                return section;
                section = E;

            }
            else if (n > max_students_class && section == E)
            {
                n++;
                if (n > 40)
                {
                    section = G;
                    n = 0;
                return section;
                    break;
                }
                else
                section = F;
                return section;

            }
            else if (n > max_students_class && section == F)
            {
                n++;
                if (n > 40)
                {

                    cout << " you can't get admission now \n sorry , because seats are full  \n";
                    cout << " you can take admission in next time . Best of luck \n  \n";
                    
                }
                else
                section = G;
				return section;

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
            cout << " Thanks for paying fees : " << fees[n] <<endl;
            cout << "\n your admission process is done " << " in class " << Class;
            cout << "\n classes start from next week \n ";
            cout << "\n We will happy to see you in class ! \n ";
          


            
        }


        //

    };





        ////////////////////
        // for student personal information 
        class StudentAdmission  : public Class
        {
        private:
            string fname; //first Name
            string lname; //first Name

            // for student personal information
            int age;
            char gender;
            string sex;
            string address;
            double phone_no;

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

                    sex = " Male ";

                else
                    sex = " Female ";

                cout << "Enter your address  : ";
                getline(cin, address);
           
                cout << "Enter your phone no or fathers mobile no : ";
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
                cout << " Enter your previous class ";
                cin >> previousClass;
                cout << " Enter your previous class Marks";
                cin >> previousClassMarks;
                cout << " Enter your previous class Grade";
                cin >> passingGrade;


            }

            //
            void showPreviousRecord()
            {
                cout << "\nprevious class :"<< previousClass;
                cout << " \nEnter your previous class Marks "<< previousClassMarks;
                cout << "\nprevious class Grade : "<<passingGrade<<endl;

            }



        };


        ////////////////////////
        ////////////////////////
class Management {


};


int main()
{
    char ch;
    int input;

    clear_screen();
    cout <<  flush;//flush forces the printing to the screen before it clears
    do
    {
    system("CLS");
    system("CLS");
        
        cout << endl;

        /// /// ////to print statements to show user what to do? /// /// ///
        printdash();
        cout << " Student Record Management System \n";
        printdash();

        printSteric();
        cout << "  Administration Panel    \t\t\" press 1 \" \n";
        cout << "  Student login  \t \t \" press 2 \" \n";
        cout << "   student  register / sign up  \" press 3 \" \n";
        printSteric();

        /// /// //// /// /// ///
        cout << "\b\" press 1 or 2 or 3 \" \n";
        cin >> input;

        if(input == 1)
        {
            system("CLS");
            system("CLS");

            cout << " you are on Administration portal ";


        }
        else if( input == 2)
        { 
            system("CLS");
            system("CLS");

            cout << " you are on student portal ";
        }

        else if (input == 3)
        {
            system("CLS");
            cout << endl;
            system("CLS");
            system("CLS");
            cout << endl;

            cout << " you are on Sign up  page \n  ";
            cout << " input what we want you to enter : so lets start \n\n \n ";
            printdash();
            printdash;
            cout << endl;
            StudentAdmission Students;
            cout << " Enter your personell Information \n";
            printSteric();
            cout << endl;
            Students.setStudentPersonelInformation();
            printSteric();

            cout << "\nEnter your Previous Record\n";
            cout << endl;
            Students.getPreviousRecord();

            printSteric();
            cout << endl;

            Students.setClass();
            Students.setSection();
            printdash();
            cout << endl;
            cout << " Pay you Fees first then your admission is done \n";
            Students.payYourFees();
            cout << " your roll no is : ";
            Students.getRollNo();
            printdash();
            printdash();
            
          
            
            while(true)
            { 
                system("CLS");
                system("CLS");

                cout << "\n check your information which you provide to us \n";
            cout << " if you want to change something so press y " <<endl  ;

            cout << endl;
            cout<< endl;
            printdash();
            Students.showStudentPersonelInformation();
            Students.showPreviousRecord();
            Students.payedFees();
            Students.showSection();
            cout << "\n your roll no is : " << Students.getRollNo() << endl;
            
            printSteric();
            

            cout << "\n check your information which you provide to us \n";
            cout << " if you want to change something so press y " << endl;
            cin >> ch;
            switch (ch)
            {
                case 'y':
				{	
                   
                    system("CLS");
                    system("CLS");

					Students.setStudentPersonelInformation();
					Students.getPreviousRecord();
					Students.setClass();
					Students.setSection();
					Students.payYourFees();
				
					break;
                }

                case 'n':
                {
                    break;
                }
                default:
                    break;
            }
            }

            


        }
        else
        {
            cout << "\n you entered wrong number again press \" 1 \ 2 \ 3 \" \n";

        }

        cout << "\n do you want to recall this program \n if yes than \" press y \" otherwise \"press n \"" << endl;
        cin >> ch;

     
    } while (ch == 'y' || ch == 'Y');
   
    
    return 0;
}

