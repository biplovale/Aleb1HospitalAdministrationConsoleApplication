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

//removes patient from triage system to treated triage system
void HospitalAdministrationController::removePatient() {
    Patient patient = triageList.top();
    triageList.pop();
    patient.setIsTreated(true);
    treatedTriageList.push(patient);
}

void HospitalAdministrationController::popTriageList() {
    triageList.pop();
}

void HospitalAdministrationController::popTreatedTriageList() {
    treatedTriageList.pop();
}

void HospitalAdministrationController::consoleReportPatient(const Patient& patient) const {
    cLogger.log(patient);
}

void HospitalAdministrationController::fileReportPatient(const Patient& patient, bool reportAll) const {
    fLogger.log(patient, reportAll);
}

void HospitalAdministrationController::fileReportClear() const {
    fLogger.clearLog();
}

//Accessors and Mutators
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTriageList() const {
    return triageList;
}
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTreatedTriageList() const {
    return treatedTriageList;
}
