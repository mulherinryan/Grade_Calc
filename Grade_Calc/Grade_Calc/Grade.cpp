#include "Grade.h"
#include <iostream>
#include <iomanip>

using namespace std;

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
    cout << "______________________________________________" << endl;
    cout << "What is the weight of Homework assignments: ";
    cin >> weight;
    totalPercent += weight;
    line36 :
    cout << "How many Homework assignments did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line33;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector homeworkGrades
    while (i <= numGrades) {
        line46 :
        cout << "Homework " << i << " grade: ";
        cin >> grade;
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
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << "Homework average: " << average << endl << endl;
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
    cout << "______________________________________________" << endl;
    cout << "What is the weight of assignments: ";
    cin >> weight;
    totalPercent += weight;
    line85 :
    cout << "\nHow many assignments did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line82;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector assignmentGrades
    while (i <= numGrades) {
        line95 :
        cout << "Assignment " << i << " grade: ";
        cin >> grade;
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
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << "Assignment average: " << average << endl << endl;
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
    cout << "______________________________________________" << endl;
    cout << "What is the weight of Quizzes: ";
    cin >> weight;
    totalPercent += weight;
    line134 :
    cout << "\nHow many Quizzes did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector QuizGrades
    while (i <= numGrades) {
        line144 :
        cout << "Quiz " << i << " grade: ";
        cin >> grade;
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
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << "Quiz average: " << average << endl << endl;
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
    cout << "______________________________________________" << endl;
    cout << "What is the weight of Projects: ";
    cin >> weight;
    totalPercent += weight;
    line134 :
    cout << "\nHow many Projects did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector projectGrades
    while (i <= numGrades) {
        line144 :
        cout << "Project " << i << " grade: ";
        cin >> grade;
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
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << "Project average: " << average << endl << endl;
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
    cout << "______________________________________________" << endl;
    cout << "What is the weight of Tests: ";
    cin >> weight;
    totalPercent += weight;
    line134 :
    cout << "\nHow many Tests did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line131;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector testGrades
    while (i <= numGrades) {
        line144 :
        cout << "Test " << i << " grade: ";
        cin >> grade;
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
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << "Test average: " << average << endl << endl;
}

//------------------------------------------------------------------------------

float Grade::getTestPoints() const {
    return (average * weight / 100);
}

//------------------------------------------------------------------------------


void Grade::setExtraGrades() {
    weight = 0;
    
    line228:
    cout << "______________________________________________" << endl;
    cout << "What is the weight of the extra Grade: ";
    cin >> weight;
    totalPercent += weight;
    cout << "Grade: ";
    cin >> number;
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

