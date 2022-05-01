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
    Patient(string fName, string mName, string lName, string suf, vector<string>& ail, string doc, bool isT, unsigned int pri);   //Constructor
    ~Patient();                                                                                                         //Destructor
    Patient(const Patient& rhs);                                                                                        //Copy constructor
    const Patient& operator=(const Patient& rhs);                                                                       //operator= overload

    //getters and setters
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    string getSuffix() const;
    vector<string> getAliment() const;
    string getDoctor() const;
    unsigned int getPriority() const;


    //Functor for priority queue, so it does priority with lower priority number at the beginning
//    class LessThanByPriority{
//    public:
//        bool operator() (const Patient& lhs, const Patient& rhs) const{
//            return (lhs.priority < rhs.priority);
//        }
//    };

//    //containers
//    static priority_queue<Patient, vector<Patient>, LessThanByPriority> triageList;                                     //stores untreated triage patients priority-wise and then first come, first served
//    static priority_queue<Patient, vector<Patient>, LessThanByPriority> treatedTriageList;                              //stores treated triage patients priority-wise and then first come, first served

private:
    string firstName, middleName, lastName, suffix;
    vector<string>* ailment;
    string doctor;
    bool isTreated;
    unsigned int priority;
    ConsoleLogger cLogger = ConsoleLogger::getInstance();
    FileLogger fLogger = FileLogger::getInstance();
};

#endif //PATIENT_H
