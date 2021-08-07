#pragma once
const unsigned int max_students_class = 4; // total students is 40 in each class but
// i am changing now for checking performance .. to 4
enum sections { A, B, C, D, E, F, G };
enum your_classes { one, two, three, four, five, sex, seven, eight, nine, ten };
const unsigned int classes = 10;
enum subjects { English, Urdu, Math, Chemistry, Computer, Drawing, Pysics, GeneralScience };
const unsigned int totalMarks = 100;
int n = 0;
const int size_max = 30;
using namespace std;

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


}

