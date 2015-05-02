#ifndef __Grade_Calc__Assignments__
#define __Grade_Calc__Assignments__

#include "Grade.h"
#include <stdio.h>
#include <vector>
#include <iostream>

class Assignments : public Grade {
public:
    void setAssignmentGrades();
    float getAssignmentPoints();
    std::vector<float> assignmentGrades;
private:
    int numAssignments;
    float assignmentAverage;
    int assignmentWeight;
};

#endif /* defined(__Grade_Calc__Assignments__) */
