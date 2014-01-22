/******************************************************
 ** FILE: student.h
 **
 ** ABSTRACT:
 ** Provides declarations for the Student, UndergradStudent,
 ** and GraduateStudent classes.
 **
 ** AUTHOR:
 ** Nick Durak
 ** Barend Ungrodt
 **
 ** CREATION DATE:
 ** 15/01/2014
 **
 *******************************************************/

#ifndef __CSE335_Project1__student__
#define __CSE335_Project1__student__

#include<iostream>
#include<vector>
using namespace std;

/**
*   
*/
class Student
{
public:
    
    /*
     *  constructor for student
     */
    Student(int studentID = 0, string name = "", int year = 0, float grade = 0.0);
    
    virtual void print();
    
protected:
    
    int m_studentID;
    string m_name;
    int m_year;
    float m_grade; // GPA
};


class UndergradStudent: public Student
{
public:
    
    /*
     *  constructor for UndergradStudent
     */
    UndergradStudent(int studentID, string name, int year, float grade, string major, string minor);
    
    ~UndergradStudent();
    
    void print();
    
private:
    string m_major;
    string m_minor;
    
    
};


class GraduateStudent: public Student
{
public:
    
    GraduateStudent(int studentID, string name, int year, float grade, string dep, string advisor);
    
    void print();
    
private:
    string m_dep;
    string m_advisor;
};



#endif

