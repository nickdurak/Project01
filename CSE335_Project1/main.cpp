#include<iostream>
#include<vector>
using namespace std;

#include "student.h"


int main()
{
	vector<Student*> studentList;
	// add few undergrad and grad students in the list
	
	studentList.push_back(new GraduateStudent(5001, "huang"   , 2008, 4.00, "cse" , "Dr. x"));
	studentList.push_back(new GraduateStudent(5002, "sam"     , 2011, 3.00, "ece" , "Dr. A"));
	studentList.push_back(new GraduateStudent(5003, "mat"     , 2007, 3.70, "mech", "Dr. M"));
	studentList.push_back(new GraduateStudent(5004, "joshua"  , 2007, 3.50, "ce"  , "Dr. C"));
	studentList.push_back(new GraduateStudent(5005, "li"      , 2013, 3.25, "cse" , "Dr. T"));
	studentList.push_back(new GraduateStudent(5006, "ghunpoka", 2009, 4.00, "cse" , "Dr. x"));
	studentList.push_back(new GraduateStudent(5007, "brendan" , 2010, 3.80, "ce"  , "Dr. L"));
	studentList.push_back(new GraduateStudent(5008, "zibi"    , 2008, 3.90, "mech", "Dr. W"));
	
	studentList.push_back(new UndergradStudent(100, "idban"   , 2013, 3.85, "eee", "cse"));
	studentList.push_back(new UndergradStudent(100, "taylor"  , 2013, 3.68, "cse", "eee"));
	studentList.push_back(new UndergradStudent(100, "nick"    , 2013, 3.18, "me" , "cse"));
	studentList.push_back(new UndergradStudent(100, "anusua"  , 2013, 3.80, "eee", "me" ));
	studentList.push_back(new UndergradStudent(100, "sumu"    , 2013, 4.00, "ce" , "me" ));
	studentList.push_back(new UndergradStudent(100, "yang"    , 2013, 3.95, "eee", "cse"));
	studentList.push_back(new UndergradStudent(100, "jenifer" , 2013, 4.00, "cse", "ce"));
	studentList.push_back(new UndergradStudent(100, "jessica" , 2013, 3.85, "cse", "eee"));
    
	// print student information
	for(unsigned int i = 0; i < studentList.size(); i++){
		studentList[i]->print();
	}
    
	// cleaning up memory
	for(unsigned int i = 0; i < studentList.size(); i++){
		delete studentList[i];
	}
	studentList.clear();
	return 0;
}
