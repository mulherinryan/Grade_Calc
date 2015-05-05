#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
    Grade();
    bool checkYesNo(std::string);
    bool checkAn(float);
    
    void setHwGrades();
    float getHwPoints();                    // Homework
    std::vector<float> hwGrades;
    
    void setAssignmentGrades();
    float getAssignmentPoints();            // Assignments
    std::vector<float> assignmentGrades;
    
    void setQuizGrade();
    float getQuizPoints();                  // Quizzes
    std::vector<float> quizGrades;
    
    void setProjectGrades();
    float getProjectPoints();               // Projects
    std::vector<float> projectGrades;
    
    
protected:
    float grade;
    
    int numHw;
    int hwWeight;
    float hwAverage;
    
    int numAssignments;
    int assignmentWeight;
    float assignmentAverage;
    
    int numQuizes;
    int quizWeight;
    float quizAverage;
    
    int numProjects;
    int projectWeight;
    float projectAverage;
};

#endif /* defined(__Grade_Calc__grade__) */