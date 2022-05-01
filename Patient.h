#ifndef PATIENT_H
#define PATIENT_H

//Libraries
#include <string>
#include "ConsoleLogger.h"                      //For console logs
#include "FileLogger.h"                         //For File logs
#include <vector>
using namespace std;

class Patient {
public:
    Patient(string fName, string mName, string lName, string suf, const vector<string>& ail, string doc, bool isT, unsigned int pri);   //Constructor
//    ~Patient();                                                                                                         //Destructor
    Patient(const Patient& rhs);                                                                                        //Copy constructor
    Patient& operator=(const Patient& rhs);                                                                       //operator= overload

    //getters and setters
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    string getSuffix() const;
    vector<string> getAliment() const;
//    bool getIsTreated() const;
    string getDoctor() const;
    unsigned int getPriority() const;

private:
    string firstName, middleName, lastName, suffix;
    vector<string> ailment;
    string doctor;
    bool isTreated;
    unsigned int priority;
    ConsoleLogger cLogger = ConsoleLogger::getInstance();
    FileLogger fLogger = FileLogger::getInstance();
};

#endif //PATIENT_H
