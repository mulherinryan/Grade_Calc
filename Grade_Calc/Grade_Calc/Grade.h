#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
    bool checkAn(float);
    
    void setHwGrades();
    float getHwPoints() const;                    // Homework
    std::vector<float> hwGrades;
    
    void setAssignmentGrades();
    float getAssignmentPoints() const;            // Assignments
    std::vector<float> assignmentGrades;
    
    void setQuizGrade();
    float getQuizPoints() const;                  // Quizzes
    std::vector<float> quizGrades;
    
    void setProjectGrades();
    float getProjectPoints() const;               // Projects
    std::vector<float> projectGrades;
    
                                                  // Tests
    
    void setExtraGrades();
    float getExtraGradesPoints() const;           // Extra grades
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