#include "Grade.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

Grade::Grade() {
    
}

bool Grade::checkYesNo(std::string input) {
    if (input != "y" && input != "Y" && input != "n" && input != "N") {
        std::cout << "Must enter 'Y' or 'N': ";
        return false;
    }
    return true;
}

//------------------------------------------------------------------------------

bool Grade::checkAn(float num) {
    if (num >= 80 && num < 90) {
        return true;
    }
    return false;
}

//------------------------------------------------------------------------------

void Grade::setHwGrades() {
    int i = 1;
    std::cout << "What is the weight of Homework assignments? %";
    std::cin >> hwWeight;
    std::cout << "\nHow many Homework assignments did you have? ";
    std::cin >> numHw;
    
    // inserts each grade entered into vector homeworkGrades
    while (i <= numHw) {
        std::cout << "Homework " << i << " grade: ";
        std::cin >> grade;
        hwGrades.push_back(grade);
        ++i;
    }
    
    // calculates average grade for all homework assignments
    for (int i = 0; i < numHw; ++i) {
        hwAverage += hwGrades[i];
    }
    hwAverage /= numHw;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Homework average: " << hwAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getHwPoints() {
    return (hwAverage * hwWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setAssignmentGrades() {
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

float Grade::getAssignmentPoints() {
    return (assignmentAverage * assignmentWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setQuizGrade() {
    int i = 1;
    std::cout << "What is the weight of Quizzes? %";
    std::cin >> quizWeight;
    std::cout << "\nHow many Quizzes did you have? ";
    std::cin >> numQuizes;
    
    // inserts each grade entered into vector QuizGrades
    while (i <= numQuizes) {
        std::cout << "Quiz " << i << " grade: ";
        std::cin >> grade;
        quizGrades.push_back(grade);
        ++i;
    }
    
    // calculates average grade for all quizes
    for (int i = 0; i < numQuizes; ++i) {
        quizAverage += quizGrades[i];
    }
    quizAverage /= numQuizes;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Quiz average: " << quizAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getQuizPoints() {
    return (quizAverage * quizWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setProjectGrades() {
    int i = 1;
    std::cout << "What is the weight of Projects? %";
    std::cin >> projectWeight;
    std::cout << "\nHow many Projects did you have? ";
    std::cin >> numProjects;
    
    // inserts each grade entered into vector projectGrades
    while (i <= numProjects) {
        std::cout << "Project " << i << " grade: ";
        std::cin >> grade;
        projectGrades.push_back(grade);
        ++i;
    }
    
    // calculates average grade for all projects
    for (int i = 0; i < numProjects; ++i) {
        projectAverage += projectGrades[i];
    }
    projectAverage /= numProjects;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Project average: " << projectAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getProjectPoints() {
    return (projectAverage * projectWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setExtraGrades() {
    std::cout << "What is the weight of the extra Grade? %";
    std::cin >> extraGradeWeight;
    
    std::cout << "Grade: %";
    std::cin >> grade;
    extraGrades.push_back(grade);
}

//------------------------------------------------------------------------------

float Grade::getExtraGradesPoints() {
    return (grade * extraGradeWeight / 100);
}

//------------------------------------------------------------------------------











