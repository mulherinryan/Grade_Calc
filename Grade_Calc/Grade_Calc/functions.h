#ifndef __Grade_Calc__functions__
#define __Grade_Calc__functions__

#include <stdio.h>
//#include <string>

std::string checkYesNo() {
    std::string input = " ";
    std::cin >> input;
    while (input != "y" && input != "Y" && input != "n" && input != "N") {
        std::cout << "Must enter 'Y' or 'N': ";
        std::cin >> input;
        std::cout << std::endl;
    }
    return input;
}

//------------------------------------------------------------------------------

void question(std::string name) {
    std::cout << "Do you have any " << name << " grades? Enter 'Y' for yes, 'N' for no: ";
    return;
}

#endif /* defined(__Grade_Calc__functions__) */
