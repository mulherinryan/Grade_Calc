#ifndef __Grade_Calc__functions__
#define __Grade_Calc__functions__

#include <stdio.h>

bool checkYesNo(std::string input) {
    if (input != "y" && input != "Y" && input != "n" && input != "N") {
        std::cout << "Must enter 'Y' or 'N': ";
        return false;
    }
    return true;
}

//------------------------------------------------------------------------------

std::string yesNoInput() {
    line14 :
    std::string yesNo;
    std::cin >> yesNo;
    
    // checks if they enter either 'Y' or 'N' (capital or lowercase)
    if (!checkYesNo(yesNo)) {
        goto line14;
    }
    std::cout << std::endl << std::endl;
    return yesNo;
}

//------------------------------------------------------------------------------

void question(std::string name) {
    std::cout << "Do you have any " << name << " grades? Enter 'Y' for yes, 'N' for no: ";
    return;
}

#endif /* defined(__Grade_Calc__functions__) */
