#ifndef PATIENT_H
#define PATIENT_H

//Libraries
#include <string>
#include "ConsoleLogger.h"                      //For console logs
#include "FileLogger.h"                         //For File logs
#include <queue>
using namespace std;

class Patient {
public:
    Patient(string& fName, string& mName, string& lName, string& suf, string& doc, unsigned int& pri);                  //Constructor
    ~Patient();                                                                                                         //Destructor
    Patient(const Patient& rhs);                                                                                        //Copy constructor
    const Patient& operator=(const Patient& rhs);                                                                       //operator= overload


private:
    string firstName;
    string middleName;
    string lastName;
    string suffix;
    string doctor;
    unsigned int priority;
    ConsoleLogger cLogger = ConsoleLogger::getInstance();
    FileLogger fLogger = FileLogger::getInstance();
    static priority_queue<Patient> triageList;                                                                          //stores untreated triage patients priority-wise and then first come, first served
    static priority_queue<Patient> treatedTriageList;                                                                   //stores treated triage patients priority-wise and then first come, first served
};


#endif //PATIENT_H
