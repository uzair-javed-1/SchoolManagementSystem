// SchoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <string>
#include "GlobalVariableandFunctions.h"
#include "Class.h"
#include "StudentAdmission.h"

#include "Management.h"
using namespace std;

/////










        ////////////////////////
        ////////////////////////



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
           

            cout << " you are on Administration portal ";


        }
        else if( input == 2)
        { 
            system("CLS");
          

            cout << " you are on student portal ";
        }

        else if (input == 3)
        {
            system("CLS");
           
			printdash();
			printSteric();
    

            cout << " you are on Sign up  page \n  ";
			printSteric();
            cout << endl;
            printdash;
            cout << " input what we want you to enter : so lets start \n\n \n ";
            StudentAdmission Students;
            cout << " Enter your personal Information \n";
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

