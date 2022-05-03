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
    void log(const Patient& patient, bool reportAll) const;                             //writes the content in a .txt file
    void clearLog() const;
};


#endif //FILELOGGER_H
