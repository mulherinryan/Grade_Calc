#ifndef __Grade_Calc__functions__
#define __Grade_Calc__functions__

#include <stdio.h>
//#include <string>

using namespace std;

bool checkYesNo() {
    string input = " ";
    cin >> input;
    while (input != "y" && input != "Y" && input != "n" && input != "N") {
        cout << "Must enter 'Y' or 'N': ";
        cin >> input;
        cout << endl;
    }
    if (input == "y" || input == "Y") {
        return true;
    }
    return false;
}

void question(string name) {
    cout << "\nDo you have any " << name << " grades? (Y/N): ";
    return;
}

bool checkAn(float num) {
    if (num >= 80 && num < 90) {
        return true;
    }
    return false;
}

#endif /* defined(__Grade_Calc__functions__) */
