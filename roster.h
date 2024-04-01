#pragma once

#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;

class Roster
{
public:
    //E) 1 Array of pointers for student objects
    Student *classRosterArray[5];
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();

    Roster(){};
    //~Roster();
    
};


#endif