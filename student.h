#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <vector>
#include <string>
using std::string;
using std::vector;

class student 
{
    private:
            string fname;
            string lname;
            double grade;
            vector <double> gradeList;

    public:
            void setName(string, string);
            string fullName();
            student();
            void addGrade(double);
            double getScore();

};

#endif
