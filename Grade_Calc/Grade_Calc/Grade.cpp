#include "Grade.h"
#include <iostream>
#include <iomanip>

using namespace std;

Grade::Grade() {
    average = 0;
    totalPercent = 0;
}

void Grade::setGrades(string assignment) {
    numGrades = 0;
    weight = 0;
    average = 0;
    
    // empties vector
    grades.erase(grades.begin(), grades.begin() + grades.size());
    
    int i = 1;
    line21 :
    cout << "______________________________________________" << endl;
    cout << "What is the weight of " << assignment << " assignments: ";
    cin >> weight;
    totalPercent += weight;
    line26 :
    cout << "How many " << assignment << " assignments did you have: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line21;
    }
    numGrades = atoi(number.c_str());
    
    // inserts each grade entered into vector grades
    while (i <= numGrades) {
        line36 :
        cout << assignment << " " << i << " grade: ";
        cin >> grade;
        if (grade == "b" || grade == "back") {
            if (i == 1) {
                goto line26;
            }
            grades.erase(grades.begin() + (i - 2));
            --i;
            goto line36;
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
    
    line69:
    cout << "______________________________________________" << endl;
    cout << "What is the weight of the extra Grade: ";
    cin >> weight;
    totalPercent += weight;
    cout << "Grade: ";
    cin >> number;
    if (number == "b" || number == "back") {
        goto line69;
    }
    gradeP = atoi(number.c_str());
    extraGrades.push_back(gradeP);
}

float Grade::getExtraGradesPoints() const {
    return (gradeP * weight / 100);
}
