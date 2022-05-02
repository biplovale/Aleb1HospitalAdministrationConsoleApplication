#ifndef HOSPITALADMINISTRATIONCONTROLLER_H
#define HOSPITALADMINISTRATIONCONTROLLER_H

#include "Comparator.h"
#include "Patient.h"
#include <queue>

class HospitalAdministrationController {
public:
    HospitalAdministrationController();
    ~HospitalAdministrationController();
    void addPatient(const Patient& patient);                                                                            //add patient to triage system or treated triage system
    void removePatient();                                                                                               //removes a patient from triage system to treated triage system
    void popTriageList();                                                                                               //removes the top element from triage system
    void popTreatedTriageList();                                                                                        //removes the top element from treated triage system

    //mutators and accessors
    priority_queue<Patient, vector<Patient>, LessThanByPriority> getTriageList() const;
    priority_queue<Patient, vector<Patient>, LessThanByPriority> getTreatedTriageList() const;
private:
    //containers
    priority_queue<Patient, vector<Patient>, LessThanByPriority> triageList;                                            //stores untreated triage patients priority-wise and then first come, first served
    priority_queue<Patient, vector<Patient>, LessThanByPriority> treatedTriageList;                                     //stores treated triage patients priority-wise and then first come, first served
};


#endif //HOSPITALADMINISTRATIONCONTROLLER_H
