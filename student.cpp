#include "student.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
student::student()
{
    fname = "";
    lname = "";
    grade = 0;
}

void student::setName(string firstName, string lastName)
{
    fname = firstName;
    lname = lastName;
}

string student::fullName()
{
    string name = fname + " " +  lname;
    return name;
}

void student::addGrade(double grades)
{
        gradeList.push_back(grades);
}

double student::getScore()
{
    double score = 0;
    for(int i = 0; i <gradeList.size(); i++)
    {
        score += gradeList[i];
    }
    return score;
}
