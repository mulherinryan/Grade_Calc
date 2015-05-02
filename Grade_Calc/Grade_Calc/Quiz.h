#ifndef __Grade_Calc__Quizzes__
#define __Grade_Calc__Quizzes__

#include "Grade.h"
#include <stdio.h>
#include <vector>
#include <iostream>

class Quiz : public Grade {
public:
    void setQuizGrade();
    float getQuizPoints();
    std::vector<float> quizGrades;
private:
    int numQuizes;
    int quizWeight;
    float quizAverage;
};

#endif /* defined(__Grade_Calc__Quizzes__) */
