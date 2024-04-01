#include <string>
#include <iostream>
#include "roster.h"
#include "degree.h"
#include "student.h"

using namespace std;

int main()
{

    // A. Modified the studentstudentData[i] table to include my personal information in the last item
    const string studentData[] =

        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Yavaar,Nosimohomed,ynosimo@my.wgu.edu,33,30,20,45,SOFTWARE"};

    //F. 2) Create an instance of the Roster class called classRoster

    //Roster classRoster;
    Roster classRoster;

    //E. 2) A Parsing of data
    for (int i = 0; i < 5; i++)
    {

        size_t rhs = studentData[i].find(",");
        string studentID1 = studentData[i].substr(0, rhs);

        size_t lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string firstName1 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string lastName1 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string emailAddress1 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int age1 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInCourse_1 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInCourse_2 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInCourse_3 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string strdegree = studentData[i].substr(lhs, rhs - lhs);

        DegreeProgram degreeProgram1 = SECURITY;

        if (strdegree == "SECURITY")
        {

            degreeProgram1 = SECURITY;
        }
        else if (strdegree == "NETWORK")
        {

            degreeProgram1 = NETWORK;
        }
        else if (strdegree == "SOFTWARE")
        {

            degreeProgram1 = SOFTWARE;
        }
        

        classRoster.add(studentID1, firstName1, lastName1, emailAddress1, age1, daysInCourse_1, daysInCourse_2, daysInCourse_3, strdegree);
        //cout << studentID1 << "\t" << firstName1 << "\t" << lastName1 << "\t" << emailAddress1 << "\t" << age1 << "\t" << daysInCourse_1 << "\t" << daysInCourse_2 << "\t" << daysInCourse_3 << "\t" << strdegree << endl;

    }
}
