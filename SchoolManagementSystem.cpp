// SchoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <string>
#include "GlobalVariableandFunctions.h"
#include "Class.h"
#include "StudentAdmission.h"
#include "Signin.h"


#include "Management.h"






int main()
{
   
    char ch='y';
   char input='1';
    int rollno = 0;
    StudentAdmission Students[28];
 
    do
    {
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
       std:: cin >> input;


        if (input == '1')
        {
            system("CLS");


            cout << " you are on Administration portal ";


        }
        else if (input == '2')
        {
            system("CLS");


            cout << " you are on student portal ";
        }

        else if (input == '3')
        {

            rollno++;

            do {
                system("CLS");


                printdash();
                printSteric();


                cout << " you are on Sign up  page \n  ";
                printSteric();
                cout << endl;
                printdash();
                cout << " input what we want you to enter : so lets start \n\n \n ";


                cout << " Enter your personal Information \n";
                printSteric();
                cout << endl;
                Students[rollno].setStudentPersonelInformation();
                printSteric();

                cout << "\nEnter your Previous Record\n";
                cout << endl;
                Students[rollno].getPreviousRecord();

                printSteric();
                cout << endl;

                Students[rollno].setClass();
                Students[rollno].setSection();
                printdash();
                cout << endl;
                cout << " Pay you Fees first then your admission is done \n";
                Students[rollno].payYourFees();
                cout << " your roll no is : "<< Students[rollno].getRollNo(rollno);
                cout << endl << endl;
                Students[rollno].signup();
                cout << endl;
                printdash();
                printdash();


                do {
					system("CLS");

                    
                    cout << "\n check your information what provide to us \n ";
            


                    printdash();
                    printdash();


                    cout << endl;
                    printdash();
                    Students[rollno].showStudentPersonelInformation();
                    Students[rollno].showPreviousRecord();
                    Students[rollno].payedFees();
                    cout << " \n section is "; Students[rollno].showSection();
                    cout << "\n your roll no is : " << Students[rollno].getRollNo(rollno) << endl;


                    cout << endl;

                    cout << "if you want to re change this so press y";
                    std::cin >> ch;

                } while (ch != 'y' || ch != 'Y');


        

            } while (ch == 'y' || ch == 'Y'); // upper do while loop to show what you input



        } // else if body close


        else

        {
            std::cout << "\n you entered wrong number again press \" 1  2  3 \"  : " << endl;

           
        } //else close


		cout << "\n do you want to recall this program \n if yes than \" press y \" otherwise \"press n \"" << endl;
	        std::	cin >> ch;
   
         }  while (ch == 'y' || ch == 'Y'); // to make program again and again
      
   
    
    return 0;
}

