#include "Grade.h"
#include <iostream>
#include <iomanip>

using namespace std;

Grade::Grade() {
    average = 0;
    totalPercent = 0;
}

bool Grade::checkAn(float num) {
    if (num >= 80 && num < 90) {
        return true;
    }
    return false;
}

void Grade::setGrades(string assignment) {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    // empties vector
    grades.erase(grades.begin(), grades.begin() + grades.size());
    
    int i = 1;
    line33 :
    cout << "______________________________________________" << endl;
    cout << "What is the weight of " << assignment << " assignments: ";
    cin >> weight;
    totalPercent += weight;
    line36 :
    cout << "How many " << assignment << " assignments did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line33;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector grades
    while (i <= numGrades) {
        line46 :
        cout << assignment << " " << i << " grade: ";
        cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line36;
            }
            grades.erase(grades.begin() + (i - 2));
            --i;
            goto line46;
        }
        gradeP = atoi(grade.c_str());
        grades.push_back(gradeP);
        ++i;
    }
    
    // calculates average grade for all assignments in this instance
    for (int i = 0; i < numGrades; ++i) {
        average += grades[i];
    }
    average /= numGrades;
    cout << "__________________________" << endl;
    cout << setprecision(2) << fixed;
    cout << assignment << " average: " << average << endl << endl;
}

float Grade::getPoints() const {
    return (average * weight / 100);
}

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

float Grade::getExtraGradesPoints() const {
    return (gradeP * weight / 100);
}
