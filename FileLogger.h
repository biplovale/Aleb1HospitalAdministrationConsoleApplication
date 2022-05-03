#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <iostream>
#include "Patient.h"
#include <iomanip>
#include <fstream>
using namespace std;

class FileLogger {
private:
    FileLogger();
public:
    static FileLogger& getInstance();
    void log(const Patient& patient) const;                             //writes the content in a .txt file
};


#endif //FILELOGGER_H
