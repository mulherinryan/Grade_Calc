#ifndef __Grade_Calc__grade__
#define __Grade_Calc__grade__

#include <stdio.h>
#include <vector>
#include <iostream>


class Grade {
public:
    bool checkYesNo(std::string);
    bool checkAn(float);
protected:
    float grade;
};

#endif /* defined(__Grade_Calc__grade__) */