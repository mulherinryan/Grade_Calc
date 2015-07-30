#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

class Grade {
public:
    Grade();
    void setGrades(string);
    float getPoints() const;
    vector<float> grades;
    
    void setExtraGrades();
    float getExtraGradesPoints() const;
    vector<float> extraGrades;
    
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