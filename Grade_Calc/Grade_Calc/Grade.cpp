#include "Grade.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

Grade::Grade() {
    average = 0;
    totalPercent = 0;
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
    numGrades = 0;
    weight = 0;
    average = 0;
    
    int i = 1;
    line33 :
    std::cout << "What is the weight of Homework assignments? ";
    std::cin >> weight;
    totalPercent += weight;
    line36 :
    std::cout << "\nHow many Homework assignments did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line33;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector homeworkGrades
    while (i <= numGrades) {
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
    for (int i = 0; i < numGrades; ++i) {
        average += hwGrades[i];
    }
    average /= numGrades;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Homework average: " << average << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getHwPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------

void Grade::setAssignmentGrades() {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    int i = 1;
    line82 :
    std::cout << "What is the weight of assignments? ";
    std::cin >> weight;
    totalPercent += weight;
    line85 :
    std::cout << "\nHow many assignments did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line82;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector assignmentGrades
    while (i <= numGrades) {
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
    for (int i = 0; i < numGrades; ++i) {
        average += assignmentGrades[i];
    }
    average /= numGrades;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Assignment average: " << average << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getAssignmentPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------

void Grade::setQuizGrades() {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    int i = 1;
    line131 :
    std::cout << "What is the weight of Quizzes? ";
    std::cin >> weight;
    totalPercent += weight;
    line134 :
    std::cout << "\nHow many Quizzes did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector QuizGrades
    while (i <= numGrades) {
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
    for (int i = 0; i < numGrades; ++i) {
        average += quizGrades[i];
    }
    average /= numGrades;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Quiz average: " << average << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getQuizPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------

void Grade::setProjectGrades() {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    int i = 1;
    line131 :
    std::cout << "What is the weight of Projects? ";
    std::cin >> weight;
    totalPercent += weight;
    line134 :
    std::cout << "\nHow many Projects did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector projectGrades
    while (i <= numGrades) {
        line144 :
        std::cout << "Project " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line134;
            }
            projectGrades.erase(projectGrades.begin() + (i - 2));
            --i;
            goto line144;
        }
        gradeP = atoi(grade.c_str());
        projectGrades.push_back(gradeP);
        ++i;
    }
    
    // calculates average grade for all projects
    for (int i = 0; i < numGrades; ++i) {
        average += projectGrades[i];
    }
    
    average /= numGrades;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Project average: " << average << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getProjectPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------

void Grade::setTestGrades() {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    int i = 1;
    line131 :
    std::cout << "What is the weight of Tests? ";
    std::cin >> weight;
    totalPercent += weight;
    line134 :
    std::cout << "\nHow many Tests did you have? ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector testGrades
    while (i <= numGrades) {
        line144 :
        std::cout << "Test " << i << " grade: ";
        std::cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line134;
            }
            testGrades.erase(testGrades.begin() + (i - 2));
            --i;
            goto line144;
        }
        gradeP = atoi(grade.c_str());
        testGrades.push_back(gradeP);
        ++i;
    }
    
    // calculates average grade for all tests
    for (int i = 0; i < numGrades; ++i) {
        average += testGrades[i];
    }
    average /= numGrades;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Test average: " << average << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Grade::getTestPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------


void Grade::setExtraGrades() {
    weight = 0;
    
    line228:
    std::cout << "What is the weight of the extra Grade? ";
    std::cin >> weight;
    totalPercent += weight;
    std::cout << "Grade: ";
    std::cin >> number;
    if (number == "b" || number == "back") {
        goto line228;
    }
    gradeP = atoi(number.c_str());
    extraGrades.push_back(gradeP);
}

//------------------------------------------------------------------------------

float Grade::getExtraGradesPoints() const {
    return (gradeP * weight / 100);
}

//------------------------------------------------------------------------------

