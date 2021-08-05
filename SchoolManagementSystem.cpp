// SchoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const unsigned int max_students_class = 40;
enum sections {A,B,C,D,E,F,G};
enum your_classes { one, two, three, four, five, sex, seven, eight, nine, ten };
const unsigned int classes = 10;
enum subjects {English,Urdu,Math,Chemistry,Computer,Drawing,Pysics,GeneralScience};
const unsigned int totalMarks=100;
int n = 0;

    class Class {
    private: 
        unsigned int  Class;
        unsigned  int rollno[max_students_class];
        double fees[max_students_class]; // fees for per student in a class

        
        
    public:
        sections section =A;
        void getClass()
        {
            while (true)
            {
                cout << " In which class do you want to study? ";
                cin >> Class;
                if (Class < classes)
                {

                    break;
                }
                else
                {
                    cout << " In which class do you want to study? ";
                    cout << " you can get admission in only 1 to 10 classes \n ";
                    cout << "please choose from 1 to 10 \n ";
                    cin >> Class;

                }

            }
        }

        //
        void setSection()
        {
            while (true)
            {
            if (n <= max_students_class && section == A)
            {
                n++;
                if(n==40)
                {

                    n = 0;
                    break;
                }
                else
                { 
                section = A;
                
                rollno[n++] = n;
                }

            }
            if (n > max_students_class && section == A)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = B;

            }
            else if (n > max_students_class && section == B)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = C;

            }
            else if (n > max_students_class && section == C)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = D;

            }
            else if (n > max_students_class && section == D)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = E;

            }
            else if (n > max_students_class && section == E)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = F;

            }
            else if (n > max_students_class && section == F)
            {
                n++;
                if (n == 40)
                {

                    n = 0;
                    break;
                }
                else
                section = G;

            }

            }//for while 

        } //function body

     //
       
        void getRollNo()
        {
            rollno[n] = n;
        }


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
        void payfees()
        {
            cout << "Pay your fees first \" 5000 rs \" to get admission \n";

        }
    

    };

    // // // //

        class StudentAdmission : public Class {
            private:
             
            
              
           subjects  subject;

        public:
           

           
          


        };

        ////////////////////
        // for student personel information 
        class StudentPersonelInformation : public StudentAdmission,public StudentPreviousRecord
        {
        private:
            string fname; //first Name
            string lname; //first Name

            // for student personel information
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
                cout << " Enter your first name ";
                cin >> fname;
                cout << " Enter your Last name ";
                cin >> lname;
                cout << " Enter your age ";
                cin >> age;
                cout << " Enter your gender \"press m for male \" or \" f for female \"";
                cin >> gender;

                if (gender == 'm' or gender == 'M')

                    sex = "Male";

                else
                    sex = "Female";

                cout << "Enter your address ";
                cin >> address;
                cout << "Enter your phone no or fathers mobile no";
                cin >> phone_no;


            }
            
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

        class StudentPreviousRecord : public Class{
        private:
            int previousClassMarks;
            int previousClass;
            char passingGrade;
            
        public:
           

            


        };
            

        ////////////////////////
void printSteric()
{
    for (int j = 0; j < 45; j++)
        cout << "*";
        cout << endl;
}
void printdash()
{
    for (int j = 0; j < 45; j++)
        cout << "-";
    cout << endl;
}
class Management {


};


int main()
{
    char ch;
    int input;
 
 
    do
    {
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

            cout << " you are on Administration portal ";

        }
        else if( input == 2)
        { 
            cout << " you are on student portal ";
        }

        else if (input == 3)
        {
            cout << " you are on Sign up  page \n  ";
            cout << " input what we want you to enter : so lets start \n  ";
            StudentPersonelInformation  newStudent;
            newStudent.setStudentPersonelInformation();
            


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

