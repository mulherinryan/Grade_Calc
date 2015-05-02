#include "Assignments.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

void Assignments::setAssignmentGrades() {
    int i = 1;
    std::cout << "What is the weight of assignments? %";
    std::cin >> assignmentWeight;
    std::cout << "\nHow many assignments did you have? ";
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
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Assignment average: " << assignmentAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Assignments::getAssignmentPoints() {
    return (assignmentAverage / assignmentWeight);
}

//------------------------------------------------------------------------------