#include <algorithm>
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

const Patient HospitalAdministrationController::searchPatient(const string& firstName, const string& middleName,
                                                               const string& lastName, const string& suffix) {
    vector<Patient> searchList;

    while (!triageList.empty()){
        Patient eachPatient = triageList.top();
        triageList.pop();
        searchList.push_back(eachPatient);
    }
    for (int i = 0; i < searchList.size(); i++){
        triageList.push(searchList[i]);
    }
    auto filterFunc = [firstName, middleName, lastName, suffix](const Patient& p){
        return firstName == p.getFirstName() && middleName == p.getMiddleName() && lastName == p.getLastName() && suffix == p.getSuffix();
    };

    vector<Patient>::iterator it = find_if(searchList.begin(), searchList.end(),filterFunc);

    if (it != searchList.end()){
        return *it;
    }
    else {
        searchList.clear();

        while (!treatedTriageList.empty()) {
            Patient eachPatient = treatedTriageList.top();
            treatedTriageList.pop();
            searchList.push_back(eachPatient);
        }
        for (int i = 0; i < searchList.size(); i++) {
            treatedTriageList.push(searchList[i]);
        }

        it = find_if(searchList.begin(), searchList.end(), filterFunc);

        if (it != searchList.end()) {
            return *it;

        }
        else{
            cout << "The Patient is not in the system" << endl;
        }
    }
}



//Accessors and Mutators
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTriageList() const {
    return triageList;
}
priority_queue<Patient, vector<Patient>, LessThanByPriority> HospitalAdministrationController::getTreatedTriageList() const {
    return treatedTriageList;
}
