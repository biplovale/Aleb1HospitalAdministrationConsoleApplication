#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger() {

}

ConsoleLogger& ConsoleLogger::getInstance(){
    static ConsoleLogger instance;
    return instance;
}
void ConsoleLogger::log(std::string str) const{
    std::cout << "ConsoleLogger: " << str << std::endl;
}