#include "Grade.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------

bool Grade::checkYesNo(std::string input) {
    if (input != "y" && input != "Y" && input != "n" && input != "N") {
        std::cout << "Must enter 'Y' or 'N': ";
        return false;
    }
    return true;
}

//------------------------------------------------------------------------------

bool Grade::checkAn(float num) {
    if (num >= 80 && num < 90) {
        return true;
    }
    return false;
}

//------------------------------------------------------------------------------

