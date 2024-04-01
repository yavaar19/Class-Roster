#include <string>
#include <iostream>
#include "student.h"
//#include "roster.h"

using namespace std;

void Student::setStudentID(string sID)
{

    studentID = sID;
}

void Student::setfirstName(string fName)
{

    firstName = fName;
}

void Student::setlastName(string lName)
{

    lastName = lName;
}

void Student::setemailAddress(string eAddress)
{

    emailAddress = eAddress;
}

void Student::setage(int age_)
{

    age = age_;
}

void Student::setDaysInCourse(int DaysToComplete1, int DaysToComplete2, int DaysToComplete3)
{

    numberOfDays[0] = DaysToComplete1;
    numberOfDays[1] = DaysToComplete2;
    numberOfDays[2] = DaysToComplete3;
}

void Student::setdegreeProgram(string dProgram)
{

    degreeProgram = dProgram;
}

Student::Student(string studentID1, string firstName1, string lastName1, string emailAddress1, int age1, int daysInCourse_1, int daysInCourse_2, int daysInCourse_3, string degreeProgram1)
{
    studentID = studentID1;
    firstName = firstName1;
    lastName = lastName1;
    emailAddress = emailAddress1;
    age = age1;
    numberOfDays[0] = daysInCourse_1;
    numberOfDays[1] = daysInCourse_2;
    numberOfDays[2] = daysInCourse_3;
    degreeProgram = degreeProgram1;
}

//D.2) A and B Creating getter and setter for each instance variables.
string Student::getStudentID()
{

    return studentID;
}

string Student::getfirstName()
{

    return firstName;
}

string Student::getlastName()
{

    return lastName;
}

string Student::getemailAddress()
{

    return emailAddress;
}

int Student::getage()
{

    return age;
}

int *Student::getDaysInCourse()
{
    return numberOfDays;
}

string Student::getdegreeProgam()
{

    return degreeProgram;
}

void Student::print()
{
    cout << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "daysInCourse: " << numberOfDays[0] << ", " << numberOfDays[1] << ", " << numberOfDays[2] << endl;
    cout << degreeProgram << endl;

}