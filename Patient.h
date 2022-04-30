#ifndef PATIENT_H
#define PATIENT_H

//Libraries
#include <string>
#include "ConsoleLogger.h"                      //For console logs
#include "FileLogger.h"                         //For File logs
#include <queue>
#include <vector>
using namespace std;

class Patient {
public:
    Patient(string fName, string mName, string lName, string suf, vector<string>& ail, string doc, unsigned int pri);                        //Constructor
    ~Patient();                                                                                                         //Destructor
    Patient(const Patient& rhs);                                                                                        //Copy constructor
    const Patient& operator=(const Patient& rhs);                                                                       //operator= overload

    //containers
    static priority_queue<Patient> triageList;                                                                          //stores untreated triage patients priority-wise and then first come, first served
    static priority_queue<Patient> treatedTriageList;                                                                   //stores treated triage patients priority-wise and then first come, first served


private:
    string firstName, middleName, lastName, suffix;
    vector<string>* ailment;
    string doctor;
    unsigned int priority;
    ConsoleLogger cLogger = ConsoleLogger::getInstance();
    FileLogger fLogger = FileLogger::getInstance();
};


#endif //PATIENT_H
