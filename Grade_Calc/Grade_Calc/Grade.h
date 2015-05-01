#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
    Grade();
    void setAssignment();
    void printAssignments() const;
    
    std::vector<float> assignmentGrades;
private:
    std::string input;
    int vectorSize;
    int numAssignments;
    float grade;
    float assignmentAverage;
};

#endif /* defined(__Grade_Calc__grade__) */