#include <iostream>
#include <vector>
#include "Grade.h"
#include "Assignments.h"
#include "Quiz.h"

int main() {
    
    float gradeWanted = 0.0;
    float pointsNeeded = 0.0;
    float finalWeight = 0.0;
    float scoreNeeded = 0.0;
    std::string yesNo = "N";
    float totalPoints = 0;
    std::vector<float> points;
    Grade grade;

//------------------------------------------------------------------------------
    
    std::cout << "What grade are you going for? (Enter as a number i.e. 80): ";
    std::cin >> gradeWanted;
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any assignment grades? Enter 'Y' for yes, 'N' for no: ";
    Assignments assignments;
    line14 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line14;
    }
    std::cout << std::endl << std::endl;
    
    // sets assignment grades
    if (yesNo == "y" || yesNo == "Y") {
        assignments.setAssignmentGrades();
        points.push_back(assignments.getAssignmentPoints());
    }
    
//------------------------------------------------------------------------------
    
    std::cout << "Do you have any quiz grades? Enter 'Y' for yes, 'N' for no: ";
    Quiz quiz;
    line32 :
    std::cin >> yesNo;
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!grade.checkYesNo(yesNo)) {
        goto line32;
    }
    std::cout << std::endl << std::endl;
    
    // sets quiz grades
    if (yesNo == "y" || yesNo == "Y") {
        quiz.setQuizGrade();
        points.push_back(quiz.getQuizPoints());
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