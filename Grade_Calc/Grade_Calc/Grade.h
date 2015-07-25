#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>

class Grade {
public:
    Grade();
    bool checkAn(float);
    
    void setHwGrades();
    float getHwPoints() const;                    // Homework
    std::vector<float> hwGrades;
    
    void setAssignmentGrades();
    float getAssignmentPoints() const;            // Assignments
    std::vector<float> assignmentGrades;
    
    void setQuizGrades();
    float getQuizPoints() const;                  // Quizzes
    std::vector<float> quizGrades;
    
    void setProjectGrades();
    float getProjectPoints() const;               // Projects
    std::vector<float> projectGrades;
    
    void setTestGrades();
    float getTestPoints() const;                  // Tests
    std::vector<float> testGrades;
    
    void setExtraGrades();
    float getExtraGradesPoints() const;           // Extra grades
    std::vector<float> extraGrades;
    
    int totalPercent;
    
private:
    std::string grade;
    std::string number;
    float gradeP;
    int numGrades;
    int weight;
    float average;
};

#endif /* defined(__Grade_Calc__grade__) */