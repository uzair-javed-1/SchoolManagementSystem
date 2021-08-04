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

    class Class {
    private: 
        int  Class;
    
        
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
                    cout << " you can get admission in only 1 to 10 classes \n ";
                    cout << "please choose from 1 to 10 \n ";
                    cin >> Class;

                }

         }

    

    };
        class Student : public Class {
            private:
             
            unsigned  int rollno=0;
              
           subjects  subject;

        public:
           

            void getSection()
            {
                
                    if (rollno <= max_students_class && section == A)
                    {
                        int n = 7;
                        section = A;
                        rollno++;

                    }
                    if (rollno > max_students_class && section == A)
                    {
                        section = B;

                    }
                    else if (rollno > max_students_class && section == B)
                    {
                        section = C;

                    }   
                    else if (rollno > max_students_class && section == C)
                    {
                        section = D;

                    }  
                    else if (rollno > max_students_class && section == D)
                    {
                        section = E;

                    }  
                    else if (rollno > max_students_class && section ==E)
                    {
                        section = F;

                    }
                    else if (rollno > max_students_class && section == F)
                    {
                        section = G;

                    }

                
                }

            void getRollNo()
            {
                rollno = ++rollno;
            }


        };

        ////////////////////
        // for student personel information 
        class StudentPersonelInformation : public Student ,public StudentPreviousRecord
        {
        private:
            string fname; //first Name
            string lname; //first Name

            int age;
            char gender;
            string sex;
            string address;
            double phone_no;

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


        };

        ////////////////////////

        class StudentPreviousRecord : public Class{
        private:
            int previousClassMarks;
            int previousClass;
            char passingGrade;
            
        public:
            void getPreviousRecord()
            {
                cout << " Enter your previous class ";
                cin >> previousClass;
                cout << " Enter your previous class Marks";
                cin >> previousClassMarks;
               cout << " Enter your previous class Grade";
               cin >> passingGrade;
             

            }

            


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

