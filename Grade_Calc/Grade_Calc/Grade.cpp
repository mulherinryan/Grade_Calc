#include "Grade.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

Grade::Grade() {
    assignmentAverage = 0;
}

//------------------------------------------------------------------------------

void Grade::setAssignment() {
    int i = 1;
    std::cout << "How many assignments did you have? ";
    std::cin >> numAssignments;
    
    // inserts each grade entered into vector assignmentGrades
    while (i <= numAssignments) {
        std::cout << "Assignment " << i << " grade: ";
        std::cin >> grade;
        assignmentGrades.push_back(grade);
        ++i;
    }
    
    // calculates average grade for all assignments
    for (int i = 0; i < numAssignments; ++i) {
        assignmentAverage += assignmentGrades[i];
    }
    assignmentAverage /= numAssignments;
}

//------------------------------------------------------------------------------

void Grade::printAssignments() const {
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "\n\n" << "Your average assignment grade: %" << assignmentAverage;
}

//------------------------------------------------------------------------------