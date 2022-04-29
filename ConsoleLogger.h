#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include <iostream>

class ConsoleLogger {
private:
    ConsoleLogger();//private constructor
public:
    static ConsoleLogger& getInstance();
    void log(std::string str) const;                          //prints the contents to the console
};


#endif //CONSOLELOGGER_H
