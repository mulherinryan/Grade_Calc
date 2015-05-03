#include "Quiz.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

void Quiz::setQuizGrade() {
    int i = 1;
    std::cout << "What is the weight of Quizzes? %";
    std::cin >> quizWeight;
    std::cout << "\nHow many Quizzes did you have? ";
    std::cin >> numQuizes;
    
    // inserts each grade entered into vector QuizGrades
    while (i <= numQuizes) {
        std::cout << "Quiz " << i << " grade: ";
        std::cin >> grade;
        quizGrades.push_back(grade);
        ++i;
    }
    
    // calculates average grade for all quizes
    for (int i = 0; i < numQuizes; ++i) {
        quizAverage += quizGrades[i];
    }
    quizAverage /= numQuizes;
    std::cout << "__________________________" << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Quiz average: " << quizAverage << std::endl << std::endl;
}

//------------------------------------------------------------------------------

float Quiz::getQuizPoints() {
    return (quizAverage * quizWeight / 100);
}

//------------------------------------------------------------------------------
