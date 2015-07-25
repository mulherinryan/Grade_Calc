#include <iostream>
#include <vector>
#include "functions.h"
#include "Grade.h"

int main() {    
    float gradeWanted = 0.0;
    float pointsNeeded = 0.0;
    float finalWeight = 0.0;
    float scoreNeeded = 0.0;
    float totalPoints = 0.0;
    std::string yesNo = "N";
    std::vector<float> points;
    Grade grade;

//------------------------------------------------------------------------------
    
    line17:
    std::cout << "What grade are you going for? (Enter as a number i.e. 80): ";
    std::cin >> gradeWanted;
    
    // checks if a number is entered
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Please enter a number! ";
        std::cin >> gradeWanted;
    }
    
    // checks the number is between 0 and 100
    if ((gradeWanted < 0 ) || (gradeWanted > 100)) {
        std::cout << "Please enter a number 0 - 100"  <<std::endl;
        goto line17;
    }

//------------------------------------------------------------------------------
    
    // Homework grades
    question("Homework");
    yesNo = checkYesNo();
    
    // sets homework grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setHwGrades();
        points.push_back(grade.getHwPoints());
    }
    
//------------------------------------------------------------------------------

    // Assignment grades
    question("Assignment");
    yesNo = checkYesNo();
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setAssignmentGrades();
        points.push_back(grade.getAssignmentPoints());
    }
    
//------------------------------------------------------------------------------
    
    // Quiz grades
    question("Quiz");
    yesNo = checkYesNo();
    
    // sets quiz grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setQuizGrades();
        points.push_back(grade.getQuizPoints());
    }
    
//------------------------------------------------------------------------------
    
    // Project grades
    question("Project");
    yesNo = checkYesNo();
    
    // sets Project grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setProjectGrades();
        points.push_back(grade.getProjectPoints());
    }
    
//------------------------------------------------------------------------------
    
    // Test grades
    question("Test");
    yesNo = checkYesNo();
    
    // sets test grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setTestGrades();
        points.push_back(grade.getTestPoints());
    }
    
//------------------------------------------------------------------------------
    
    // asks for any extra grades to be entered
    std::cout << "Are there any other grades that need to be entered? ";
    yesNo = checkYesNo();
    
    // sets extra grades
    if (yesNo == "y" || yesNo == "Y") {
        line103 :
        grade.setExtraGrades();
        points.push_back(grade.getExtraGradesPoints());
        
        // asks for any more grades to be entered
        std::cout << "Are there any more? ";
        yesNo = checkYesNo();
    }
    
    if (yesNo == "y" || yesNo == "Y") {
        goto line103;
    }

//------------------------------------------------------------------------------

    // sums each element (points) in the vector
    for (int i = 0; i < points.size(); ++i) {
        totalPoints += points[i];
    }
    
//------------------------------------------------------------------------------
    
    // calculates grade needed on final to get the grade wanted
    pointsNeeded = gradeWanted - totalPoints;
    finalWeight = 100 - grade.totalPercent;
    if (pointsNeeded < finalWeight) {
        scoreNeeded = pointsNeeded / finalWeight * 100;
    }
    else {
        std::cout << "\n\n___________________________________________" << std::endl << std::endl;
        std::cout << "You wont be able to get the grade you want." << std::endl;
        std::cout << "The best you can get is";
        if (grade.checkAn(totalPoints + finalWeight)) { std::cout << " an "; }
        else { std::cout << " a "; }
        std::cout << totalPoints + finalWeight << "%." << std::endl;
        return 0;
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "_________________________________________________";
    std::cout << "___________________" << std::endl << std::endl;
    std::cout << "You need to score";
    if (grade.checkAn(scoreNeeded)) { std::cout << " an "; }
    else { std::cout << " a "; }
    std::cout << scoreNeeded;
    std::cout << "% on your final to get the grade you want." << std::endl;

//------------------------------------------------------------------------------
    return 0;
}