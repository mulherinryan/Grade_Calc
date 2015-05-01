#include <iostream>
#include <vector>
#include "Grade.h"

int main() {
    std::string yesNo;
    std::string assignment;
    Grade grade;
    
    std::cout << "Do you have any assignment grades? Enter 'Y' for yes, 'N' for no: ";
    here :
    std::cin >> yesNo;
    if (yesNo != "y" && yesNo != "Y" && yesNo != "n" && yesNo != "N") {
        std::cout << "Must enter \"Y\" or \"N\"" << std::endl;
        goto here;
    }
    std::cout << std::endl << std::endl;
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setAssignment();
        grade.printAssignments();
    }
    
    return 0;
}