#ifndef PATIENT_H
#define PATIENT_H

//Libraries
#include <string>
#include "ConsoleLogger.h"                      //For console logs
#include "FileLogger.h"                         //For File logs
using namespace std;

class Patient {
public:
    Patient(string& fName, string& mName, string& lName, string& suf, string& doc, unsigned int& pri);
    ~Patient();
    Patient(const Patient& rhs);
    const Patient& operator=(const Patient& rhs);

private:
    string firstName;
    string middleName;
    string lastName;
    string suffix;
    string doctor;
    unsigned int priority;
    ConsoleLogger cLogger = ConsoleLogger::getInstance();
    FileLogger fLogger = FileLogger::getInstance();

};


#endif //PATIENT_H
