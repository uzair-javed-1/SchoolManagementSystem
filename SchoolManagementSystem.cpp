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
        class StudentPersonelInformation : public Student
        {
        private : 
            string name;
            int age;
            char gender;
            string sex;

        public:
            void setStudentPersonelInformation()
            {
                cout << " Enter your name ";
                cin >> name; 
                cout << " Enter your age ";
                cin >> age;
                cout << " Enter your gender \"press m for male \" or \" f for female \"";
                cin >> gender;
             
                if (gender == 'm' or gender == 'M')
                
                    sex = "Male";
                
                else 
                  
                    sex = "Female";
                
           

            }
            void StudentPersonelInformation()

        };
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
    int input;
    printdash();
    cout << " Student Record Management System \n";
    printdash();

    printSteric();
    cout << "  Admin Panel    \t\t\" press 1 \" \n";
    cout << "  Studnet login  \t \t \" press 2 \" \n";
    cout << "   student  register / signup  \" press 3 \" \n";
    printSteric();
 
    while (true)
    {
        cout << "\b\" press 1 or 2 or 3 \" \n";
        cin >> input;

        if(input == 1)
        {

            cout << " you are on admin potal ";
            break;

        }
        else if( input == 2)
        { 
            cout << " you are on student potal ";
            break;
        }

        else if (input == 3)
        {
            cout << " you are on signupt page \n  ";
            cout << " input what we want you to enter : so lets start \n  ";
            break;


        }
        else
        {
            cout << "\n you entered wrong number again press \" 1 \ 2 \ 3 \" \n";

        }


    }
   
    
    return 0;
}

