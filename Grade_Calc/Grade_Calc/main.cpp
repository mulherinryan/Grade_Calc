#include <iostream>
#include <vector>
#include "Grade.h"

int main() {
    std::string yesNo;
    std::string assignment;
    Grade grade;
    
    std::cout << "Do you have any assignment grades? Enter 'Y' for yes, 'N' for no: ";
    line11 :
    std::cin >> yesNo;
    if (yesNo != "y" && yesNo != "Y" && yesNo != "n" && yesNo != "N") {
        std::cout << "Must enter 'Y' or 'N'." << std::endl;
        goto line11;
    }
    std::cout << std::endl << std::endl;
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setAssignment();
        //grade.printAssignments();
    }
    
    std::cout << "Do you have any quiz grades? Enter 'Y' for yes, 'N' for no: ";
    line26 :
    std::cin >> yesNo;
    if (yesNo != "y" && yesNo != "Y" && yesNo != "n" && yesNo != "N") {
        std::cout << "Must enter 'Y' or 'N'." << std::endl;
        goto line26;
    }
    std::cout << std::endl << std::endl;
    
    if (yesNo == "y" || yesNo == "Y") {
        grade.setQuizGrade();
    }
    
    grade.printAverages();
    return 0;
}