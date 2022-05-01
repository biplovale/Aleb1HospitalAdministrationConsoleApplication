#ifndef HOSPITALADMINISTRATIONCONTROLLER_H
#define HOSPITALADMINISTRATIONCONTROLLER_H

#include "Comparator.h"
#include <queue>

class HospitalAdministrationController {
public:
    HospitalAdministrationController();
    ~HospitalAdministrationController();
    void addPatient();                                                                                                  //add patient to triage system or treated triage system
private:
    //containers
    static priority_queue<Patient, vector<Patient>, LessThanByPriority> triageList;                                     //stores untreated triage patients priority-wise and then first come, first served
    static priority_queue<Patient, vector<Patient>, LessThanByPriority> treatedTriageList;                              //stores treated triage patients priority-wise and then first come, first served
};


#endif //HOSPITALADMINISTRATIONCONTROLLER_H
