#include <iostream>
#include <vector>
#include "Grade.h"
#include "Assignments.h"
#include "Quiz.h"

int main() {
    std::string yesNo;
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
    }
    
    std::cout << "You have " << assignments.getAssignmentPoints() + quiz.getQuizPoints() << " points." << std::endl;
    //std::cout << "You need 30 more points to get a 'B' in the class.";
//------------------------------------------------------------------------------
    return 0;
}