#include "HospitalAdministrationController.h"
#include "Patient.h"

//Constructor
//HospitalAdministrationController::HospitalAdministrationController(){
//}
//
//HospitalAdministrationController::~HospitalAdministrationController(){
//
//}

//add patient to triage system or treated triage system
//void HospitalAdministrationController::addPatient(){
//    string fName, mName, lName, suf;
//    vector<string> ailment;
//    string doctor;
//    bool isTreated;
//    unsigned int priority;
//
//    string eachAilment;
//    int numOfAilment;
//
//    //user inputs
//    cout << "Enter first name:\n";
//    cin >> fName;
//    cout << "Enter middle name:\n";
//    cin >> mName;
//    cout << "Enter last name:\n";
//    cin >> lName;
//    cout << "Enter suffix (\"None\" if not applicable):\n";
//    cin >> suf;
//    cout << "Number of ailment to be added:\n";
//    cin >> numOfAilment;
//    for(int i = 1; i <= numOfAilment; i++){
//        cout << "Enter ailment:\n";
//        cin >> eachAilment;
//        ailment.push_back(eachAilment);
//    }
//    cout << "Enter doctor to be assigned:\n";
//    cin >> doctor;
//    cout << "Enter if patient is treated (\"true\" or \"false\"):\n";
//    cin >> isTreated;
//    cout << "Enter priority metric (int from 0):\n";
//    cin >> priority;
//
//    Patient patient(fName, mName, lName, suf, ailment, doctor, isTreated, priority);
//    HospitalAdministrationController::triageList.push(patient);
//
//}
