#include <iostream>
#include <vector>
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
    
    std::cout << "What grade are you going for? (Enter as a number i.e. 80): ";
    std::cin >> gradeWanted;
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any Homework grades? Enter 'Y' for yes, 'N' for no: ";
    line24 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line24;
    }
    std::cout << std::endl << std::endl;
    
    // sets homework grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setHwGrades();
        points.push_back(grade.getHwPoints());
    }
    
//------------------------------------------------------------------------------

    
    std::cout << "Do you have any assignment grades? Enter 'Y' for yes, 'N' for no: ";
    line42 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line42;
    }
    std::cout << std::endl << std::endl;
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setAssignmentGrades();
        points.push_back(grade.getAssignmentPoints());
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any quiz grades? Enter 'Y' for yes, 'N' for no: ";
    line59 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line59;
    }
    std::cout << std::endl << std::endl;
    
    // sets quiz grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setQuizGrade();
        points.push_back(grade.getQuizPoints());
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any Project grades? Enter 'Y' for yes, 'N' for no: ";
    line76 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line76;
    }
    std::cout << std::endl << std::endl;
    
    // sets Project grades
    if (yesNo == "y" || yesNo == "Y") {
        grade.setProjectGrades();
        points.push_back(grade.getProjectPoints());
    }
    
//------------------------------------------------------------------------------
    
    // asks for any extra grades
    std::cout << "Are there any other grades that need to be entered? ";
    line95 :
    std::cin >> yesNo;
    if (!grade.checkYesNo(yesNo)) {
        goto line95;
    }
    std::cout << std::endl << std::endl;
    
    if (yesNo == "y" || yesNo == "Y") {
        line103 :
        grade.setExtraGrades();
        points.push_back(grade.getExtraGradesPoints());
    }
    
    std::cout << "Are there any more? ";
    line109 :
    std::cin >> yesNo;
    if (!grade.checkYesNo(yesNo)) {
        goto line109;
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
    std::cout << "What is the weight of your final? %";
    std::cin >> finalWeight;
    if (pointsNeeded < finalWeight) {
        scoreNeeded = pointsNeeded / finalWeight * 100;
    }
    else {
        std::cout << "\n\n___________________________________________" << std::endl << std::endl;
        std::cout << "You wont be able to get the grade you want." << std::endl;
        std::cout << "The best you can get is";
        if (grade.checkAn(totalPoints + finalWeight)) { std::cout << " an %"; }
        else { std::cout << " a %"; }
        std::cout << totalPoints + finalWeight << "." << std::endl;
        return 0;
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "\n\n_________________________________________________";
    std::cout << "___________________" << std::endl << std::endl;
    std::cout << "You need to score";
    if (grade.checkAn(scoreNeeded)) { std::cout << " an %"; }
    else { std::cout << " a %"; }
    std::cout << scoreNeeded;
    std::cout << " on your final to get the grade you want." << std::endl;

//------------------------------------------------------------------------------
    return 0;
}