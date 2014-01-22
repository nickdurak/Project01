/******************************************************
 ** FILE: student.cpp
 **
 ** ABSTRACT:
 ** Provides implementation of the Student, UndergradStudent,
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

#include <iomanip>

#include "student.h"



Student::Student(int studentID, string name, int year, float grade)
{
    m_studentID = studentID;
    m_name = name;
    m_year = year;
    m_grade = grade;
}

void Student::print()
{
    cout << std::setprecision(3) << m_studentID << " " << m_name << " " << m_year << " " << m_grade;
}


UndergradStudent::UndergradStudent(int studentID, string name, int year, float grade, string major, string minor)
: Student(studentID, name, year, grade)
{
    m_major = major;
    m_minor = minor;
}

void UndergradStudent::print()
{
    Student::print();
    cout << " " << m_major << " " << m_minor << endl;
}


GraduateStudent::GraduateStudent(int studentID, string name, int year, float grade, string dep, string advisor)
: Student(studentID, name, year, grade)
{
    m_dep = dep;
    m_advisor = advisor;
}

void GraduateStudent::print()
{
    Student::print();
    cout << " " << m_dep << " " << m_advisor << endl;
}