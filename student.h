#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <string>

using namespace std;

//D1. Created student class and declared all requested variables.

class Student
{

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numberOfDays[3];
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    string degreeProgram;

    

public:
    void setStudentID(string sID);
    string getStudentID();

    void setfirstName(string fName);
    string getfirstName();

    void setlastName(string lName);
    string getlastName();

    void setemailAddress(string eAddress);
    string getemailAddress();

    void setage(int age_);
    int getage();

    void setDaysInCourse(int DaysToComplete1, int DaysToComplete2, int DaysToComplete3);
    int *getDaysInCourse();

    void setdegreeProgram(string dProgram);

    string getdegreeProgam();

    //D.2) D Constructor using all parameters
    Student(string studentID1, string firstName1, string lastName1, string emailAddress1, int age1, int daysInCourse_1, int daysInCourse_2, int daysInCourse_3, string degreeProgram1);
    
    //D.2) E print()
    void print();

    
    
    //Default constructor
    Student(){};
};

#endif