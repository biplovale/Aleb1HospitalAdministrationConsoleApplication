#include "FileLogger.h"

FileLogger::FileLogger() {

}

FileLogger& FileLogger::getInstance(){
    static FileLogger instance;
    return instance;
}
void FileLogger::log(std::string str) const{
    std::cout << "FileLogger: " << std::endl;
};