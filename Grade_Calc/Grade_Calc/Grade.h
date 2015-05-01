#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
    Grade();
    void setAssignment();
    void setQuizGrade();
    void printAverages() const;
    
    std::vector<float> assignmentGrades;
    std::vector<float> QuizGrades;
private:
    std::string input;
    int vectorSize;
    int numAssignments;
    int numQuizes;
    float grade;
    float assignmentAverage;
    float quizAverage;
};

#endif /* defined(__Grade_Calc__grade__) */