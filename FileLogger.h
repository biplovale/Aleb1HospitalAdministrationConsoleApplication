#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <iostream>

class FileLogger {
private:
    FileLogger();
public:
    static FileLogger& getInstance();
    void log(std::string str) const;                             //writes the content in a .txt file
};


#endif //FILELOGGER_H
