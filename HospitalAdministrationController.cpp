#include "HospitalAdministrationController.h"

//Constructor
HospitalAdministrationController::HospitalAdministrationController(){
}

HospitalAdministrationController::~HospitalAdministrationController(){

}

//add patient to triage system or treated triage system
void HospitalAdministrationController::addPatient(const Patient &patient) {
    if(!patient.getIsTreated()) {
        triageList.push(patient);
    }
    else {
        treatedTriageList.push(patient);
    }
}

//Accessors and Mutators
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTriageList() const {
    return triageList;
}
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTreatedTriageList() const {
    return treatedTriageList;
}
