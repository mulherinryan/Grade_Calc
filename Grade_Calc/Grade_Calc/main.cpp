#include <iostream>
#include <vector>
#include "functions.h"
#include "Grade.h"

using namespace std;

int main() {    
    float gradeWanted = 0.0;
    float pointsNeeded = 0.0;
    float finalWeight = 0.0;
    float scoreNeeded = 0.0;
    float totalPoints = 0.0;
    float gradeAverage = 0.0;
    bool yesNo = "N";
    vector<float> points;
    Grade grade;

//------------------------------------------------------------------------------
    
//    line17:
    cout << "What grade are you going for? (Enter as a number i.e. 80): ";
    line17:
    cin >> gradeWanted;
    
    // checks if a number is entered
    while (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a number. ";
        cin >> gradeWanted;
    }
    
    // checks the number is between 0 and 100
    if ((gradeWanted < 0 ) || (gradeWanted > 100)) {
        cout << "Please enter a number 0 - 100: ";
        goto line17;
    }
    cout << endl;
    
    cout << "Do you already know your grade average? ";
    yesNo = checkYesNo();
    
    // if average is not already known, asks for individual grades
    if (!yesNo) {
        // Homework grades
        question("Homework");
        yesNo = checkYesNo();
        
        // sets homework grades
        if (yesNo) {
            grade.setHwGrades();
            points.push_back(grade.getHwPoints());
        }
        
        // Assignment grades
        question("Assignment");
        yesNo = checkYesNo();
        
        // sets assignment grades
        if (yesNo) {
            grade.setAssignmentGrades();
            points.push_back(grade.getAssignmentPoints());
        }
        
        // Quiz grades
        question("Quiz");
        yesNo = checkYesNo();
        
        // sets quiz grades
        if (yesNo) {
            grade.setQuizGrades();
            points.push_back(grade.getQuizPoints());
        }
        
        // Project grades
        question("Project");
        yesNo = checkYesNo();
        
        // sets Project grades
        if (yesNo) {
            grade.setProjectGrades();
            points.push_back(grade.getProjectPoints());
        }
        
        // Test grades
        question("Test");
        yesNo = checkYesNo();
        
        // sets test grades
        if (yesNo) {
            grade.setTestGrades();
            points.push_back(grade.getTestPoints());
        }
        
        // asks for any extra grades to be entered
        cout << "Are there any other grades that need to be entered? ";
        yesNo = checkYesNo();
        
        // sets extra grades
        while (yesNo) {
            line103 :
            grade.setExtraGrades();
            points.push_back(grade.getExtraGradesPoints());
            
            // asks for any more grades to be entered
            cout << "Are there any more? ";
            yesNo = checkYesNo();
        }
        
        // sums each element (points) in the vector
        for (int i = 0; i < points.size(); ++i) {
            totalPoints += points[i];
        }
    }

    // if average grade is already known, skip manual grade input
    else {
        cout << "What is your grade average: ";
        cin >> gradeAverage;
        cout << "what is the weight of your final: ";
        cin >> finalWeight;
    }
    
    // calculates grade needed on final to get the grade wanted
    pointsNeeded = gradeWanted - totalPoints;
    finalWeight = 100 - grade.totalPercent;
    if (pointsNeeded < finalWeight) {
        scoreNeeded = pointsNeeded / finalWeight * 100;
    }
    else {
        cout << "\n\n___________________________________________" << endl << endl;
        cout << "You wont be able to get the grade you want." << endl;
        cout << "The best you can get is";
        if (grade.checkAn(totalPoints + finalWeight)) { cout << " an "; }
        else { cout << " a "; }
        cout << totalPoints + finalWeight << "%." << endl;
        return 0;
    }
    
//------------------------------------------------------------------------------
    
    cout << "_________________________________________________";
    cout << "___________________" << endl << endl;
    cout << "You need to score";
    if (grade.checkAn(scoreNeeded)) { cout << " an "; }
    else { cout << " a "; }
    cout << scoreNeeded;
    cout << "% on your final to get the grade you want." << endl;

//------------------------------------------------------------------------------
    return 0;
}