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

