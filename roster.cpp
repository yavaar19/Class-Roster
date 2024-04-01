#include <iostream>
#include <string>
#include "roster.h"

using namespace std;

//3. A) Defining void add function

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeprogram)
{

    for (int i = 0; i < 5; i++)
    {
        
        //E. 2) B Create student objects
        classRosterArray[i] = new Student;

        classRosterArray[i]->setStudentID(studentID);
        classRosterArray[i]->setfirstName(firstName);
        classRosterArray[i]->setlastName(lastName);
        classRosterArray[i]->setemailAddress(emailAddress);
        classRosterArray[i]->setage(age);
        classRosterArray[i]->setDaysInCourse(daysInCourse1, daysInCourse2, daysInCourse3);
        classRosterArray[i]->setdegreeProgram(degreeprogram);
        
       
    }
}

//3. B) Defining void remove function
void Roster::remove(string studentID)
{

    for (int i = 0; i < 5; i++)
    {

        if (classRosterArray[i]->getStudentID() == studentID)
        {

            classRosterArray[i] = 0;
            cout << "Removing student!" << endl;
        }
        else

            cout << "Student does not exist!" << endl;
    }
}

// 3. C) Void printAll() function
void Roster::printAll()
{

    for (int i = 0; i < 5; i++)
    {

        if (classRosterArray[i])
        {
            if (classRosterArray[i] != 0)
            {
                classRosterArray[i]->print();
            }
        }
    }
}

// 3. D) Void printAverageDaysInCourse() function
void Roster::printAverageDaysInCourse(string studentID)
{

    for (int i = 0; i < 5; i++)
    {

        if (classRosterArray[i]->getStudentID() == studentID)
        {

            int avg = (classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2]) / 2;
            cout << "Average time for: " << studentID << "to finish 3 courses is " << avg << " days." << endl;
        }
    }
}

// 3. E) Void printInvalidEmails() function to print invalid emails
void Roster::printInvalidEmails()
{

    bool at = false;
    bool space = false;
    bool period = false;

    cout << "Invalid Emails: " << endl;

    for (int i = 0; i < 5; i++)
    {
        string emailAdd = classRosterArray[i]->getemailAddress();

        at = false;
        space = false;

        period = false;

        if (emailAdd.find(".") < emailAdd.length())
        {
            period = true;
        }

        if (emailAdd.find(" ") < emailAdd.length())
        {
            space = true;
        }

        if (emailAdd.find("@") < emailAdd.length())
        {
            at = true;
        }

        if (at == false || period == false || space == true)
        {
            cout << (classRosterArray[i])->getemailAddress() << endl;
        }
    }
    cout << endl;
}