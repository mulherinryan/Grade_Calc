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
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Assignment average: " << assignmentAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

void Grade::setQuizGrade() {
    int i = 1;
    std::cout << "How many Quizes did you have? ";
    std::cin >> numQuizes;
    
    while (i <= numQuizes) {
        std::cout << "Quiz " << i << " grade: ";
        std::cin >> grade;
        QuizGrades.push_back(grade);
        ++i;
    }
    
    for (int i = 0; i < numQuizes; ++i) {
        quizAverage += QuizGrades[i];
    }
    quizAverage /= numQuizes;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Quiz average: " << quizAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

void Grade::printAverages() const {
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "\n\n" << "Your average assignment grade: %" << assignmentAverage << std::endl;
    std::cout << "Your average quiz grade: %" << quizAverage << std::endl;
    std::cout << "\n--------------------------------------------------------------------------------\n";
    std::cout << "ClassGrade : <Average of all grades go here>";
}

//------------------------------------------------------------------------------