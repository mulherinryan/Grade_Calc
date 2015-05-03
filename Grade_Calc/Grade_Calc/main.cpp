#include <iostream>
#include <vector>
#include "Grade.h"
#include "Assignments.h"
#include "Quiz.h"

int main() {
    std::string yesNo = "N";
    float totalPoints = 0;
    std::vector<float> points;
    Grade grade;
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any assignment grades? Enter 'Y' for yes, 'N' for no: ";
    Assignments assignments;
    line14 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line14;
    }
    std::cout << std::endl << std::endl;
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        assignments.setAssignmentGrades();
        points.push_back(assignments.getAssignmentPoints());
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any quiz grades? Enter 'Y' for yes, 'N' for no: ";
    Quiz quiz;
    line32 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line32;
    }
    std::cout << std::endl << std::endl;
    
    // sets quiz grades
    if (yesNo == "y" || yesNo == "Y") {
        quiz.setQuizGrade();
        points.push_back(quiz.getQuizPoints());
    }
    
    // sums each element (points) in the vector
    for (int i = 0; i < points.size(); ++i) {
        totalPoints += points[i];
    }
    
    std::cout << "_______________________________" << std::endl;
    std::cout << "You have " << totalPoints << " total points." << std::endl;
    std::cout << "You need ___ points to achieve a(n) ___ " << std::endl;
    
//------------------------------------------------------------------------------
    return 0;
}