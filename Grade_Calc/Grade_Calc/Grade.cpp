#include "Grade.h"
#include <iostream>
#include <iomanip>

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
    line33 :
    std::cout << "What is the weight of Homework assignments? ";
    std::cin >> hwWeight;
    line36 :
    std::cout << "\nHow many Homework assignments did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line33;
    }
    numHw = atoi(number.c_str());
    
    // inserts each grade entered into vector homeworkGrades
    while (i <= numHw) {
        line46 :
        std::cout << "Homework " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line36;
            }
            hwGrades.erase(hwGrades.begin() + (i - 2));
            --i;
            goto line46;
        }
        gradeP = atoi(grade.c_str());
        hwGrades.push_back(gradeP);
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

float Grade::getHwPoints() const {
    return (hwAverage * hwWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setAssignmentGrades() {
    int i = 1;
    line82 :
    std::cout << "What is the weight of assignments? ";
    std::cin >> assignmentWeight;
    line85 :
    std::cout << "\nHow many assignments did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line82;
    }
    numAssignments = atoi(number.c_str());
    
    // inserts each grade entered into vector assignmentGrades
    while (i <= numAssignments) {
        line95 :
        std::cout << "Assignment " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line85;
            }
            assignmentGrades.erase(assignmentGrades.begin() + (i - 2));
            --i;
            goto line95;
        }
        gradeP = atoi(grade.c_str());
        assignmentGrades.push_back(gradeP);
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

float Grade::getAssignmentPoints() const {
    return (assignmentAverage * assignmentWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setQuizGrade() {
    int i = 1;
    line131 :
    std::cout << "What is the weight of Quizzes? ";
    std::cin >> quizWeight;
    line134 :
    std::cout << "\nHow many Quizzes did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numQuizzes = atoi(number.c_str());
    
    // inserts each grade entered into vector QuizGrades
    while (i <= numQuizzes) {
        line144 :
        std::cout << "Quiz " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line134;
            }
            quizGrades.erase(quizGrades.begin() + (i - 2));
            --i;
            goto line144;
        }
        gradeP = atoi(grade.c_str());
        quizGrades.push_back(gradeP);
        ++i;
    }
    
    // calculates average grade for all quizes
    for (int i = 0; i < numQuizzes; ++i) {
        quizAverage += quizGrades[i];
    }
    quizAverage /= numQuizzes;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Quiz average: " << quizAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getQuizPoints() const {
    return (quizAverage * quizWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setProjectGrades() {
    int i = 1;
    line180 :
    std::cout << "What is the weight of Projects? ";
    std::cin >> projectWeight;
    line183 :
    std::cout << "\nHow many Projects did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line180;
    }
    numProjects = atoi(number.c_str());
    
    // inserts each grade entered into vector projectGrades
    while (i <= numProjects) {
        line193 :
        std::cout << "Project " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line183;
            }
            projectGrades.erase(projectGrades.begin() + (i - 2));
            --i;
            goto line193;
        }
        gradeP = atoi(grade.c_str());
        projectGrades.push_back(gradeP);
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

float Grade::getProjectPoints() const {
    return (projectAverage * projectWeight / 100);
}

//------------------------------------------------------------------------------

void Grade::setExtraGrades() {
line228:
    std::cout << "What is the weight of the extra Grade? ";
    std::cin >> extraGradeWeight;
    
    std::cout << "Grade: %";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line228;
    }
    gradeP = atoi(number.c_str());
    extraGrades.push_back(gradeP);
}

//------------------------------------------------------------------------------

float Grade::getExtraGradesPoints() const {
    return (gradeP * extraGradeWeight / 100);
}

//------------------------------------------------------------------------------

