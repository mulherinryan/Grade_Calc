#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
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
    
                                            // Tests
    
    void setExtraGrades();
    float getExtraGradesPoints();           // Extra grades
    std::vector<float> extraGrades;
    
protected:
    std::string grade;
    std::string number;
    float gradeP;
    
    int numHw;
    int hwWeight;
    float hwAverage;
    
    int numAssignments;
    int assignmentWeight;
    float assignmentAverage;
    
    int numQuizzes;
    int quizWeight;
    float quizAverage;
    
    int numProjects;
    int projectWeight;
    float projectAverage;
    
    int extraGradeWeight;
};

#endif /* defined(__Grade_Calc__grade__) */