#include <iostream>
#include <vector>
#include <iomanip>
#include "functions.h"
#include "Grade.h"

using namespace std;

int main() {    
    float gradeWanted = 0.0;
    float pointsNeeded = 0.0;
    float finalWeight = 0.0;
    float scoreNeeded = 0.0;
    float totalPoints = 0.0;
    bool yesNo = "N";
    vector<float> points;
    Grade grade;
    
    cout << "What grade are you going for? (Enter as a number i.e. 80): ";
    line17:
    cin >> gradeWanted;
    
    // checks if a number is entered
    while (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a number: ";
        cin >> gradeWanted;
    }
    
    // checks the number is between 0 and 100
    if ((gradeWanted < 0 ) || (gradeWanted > 100)) {
        cout << "Please enter a number 0 - 100: ";
        goto line17;
    }
    cout << endl;
    
    cout << "Do you already know your grade average (Y/N): ";
    yesNo = checkYesNo();
    
    // if average is not already known, asks for individual grades
    if (!yesNo) {
        cout << "\n----------------------------------------------------------------------" << endl;
        cout << "|Note: You can type 'b' or 'back' anytime to go to the previous question.|" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        
        vector<string> assignmentNames {"Homework", "Assignment", "Quiz", "Project", "Test"};
        
        // loops through vector to get each possible assignment grade input
        for (int i = 0; i < assignmentNames.size(); i++) {
            question(assignmentNames[i]);
            yesNo = checkYesNo();
            
            // sets grade for the assignment at assignmentNames[i]
            if (yesNo) {
                grade.setGrades(assignmentNames[i]);
                points.push_back(grade.getPoints());
            }
        }
        
        // asks for any extra grades to be entered
        cout << "\nAre there any other grades that need to be entered (Y/N): ";
        yesNo = checkYesNo();
        
        // sets extra grades
        while (yesNo) {
            line103 :
            grade.setExtraGrades();
            points.push_back(grade.getExtraGradesPoints());
            
            // asks for any more grades to be entered
            cout << "Are there any more (Y/N): ";
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
        cin >> totalPoints;
        cout << "what is the weight of your final: ";
        cin >> finalWeight;
        grade.totalPercent = 100 - finalWeight;
        totalPoints = grade.totalPercent * totalPoints / 100;
    }
    
    // calculates grade needed on final to get the grade wanted
    pointsNeeded = gradeWanted - totalPoints;
    finalWeight = 100 - grade.totalPercent;
    if (pointsNeeded < finalWeight) {
        scoreNeeded = pointsNeeded / finalWeight * 100;
    }
    // display best possible score if grade desired isn't obtainable
    else {
        cout << "\n\n___________________________________________" << endl;
        cout << "You wont be able to get the grade you want." << endl;
        cout << "The best you can get is";
        if (checkAn(totalPoints + finalWeight)) { cout << " an "; }
        else { cout << " a "; }
        cout << totalPoints + finalWeight << "% if you score a 100% on your final." << endl;
        return 0;
    }
    
//------------------------------------------------------------------------------
    
    // displays score needed on final to achieve grade desired
    cout << "_________________________________________________";
    cout << "___________________" << endl;
    cout << "You need to score";
    if (checkAn(scoreNeeded)) { cout << " an "; }
    else { cout << " a "; }
    cout << setprecision(2) << fixed;
    cout << scoreNeeded;
    cout << "% on your final to get the grade you want." << endl;

    return 0;
}