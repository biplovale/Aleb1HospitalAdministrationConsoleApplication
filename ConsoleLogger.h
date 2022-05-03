#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include <iostream>
#include <iomanip>
#include "Patient.h"
using namespace std;

class ConsoleLogger {
private:
    ConsoleLogger();//private constructor
public:
    static ConsoleLogger& getInstance();
    void log(const Patient& patient) const;                          //prints the contents to the console
};


#endif //CONSOLELOGGER_H
