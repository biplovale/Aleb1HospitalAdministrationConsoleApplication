#include "Patient.h"

//Constructor
Patient::Patient(string fName, string mName, string lName, string suf, vector<string>& ail, string doc, unsigned int pri)
    : firstName(fName), middleName(mName), lastName(lName), suffix(suf), ailment(&ail), doctor(doc), priority(pri){
}

//Destructor
Patient::~Patient(){

}

//Copy constructor
Patient::Patient(const Patient& rhs)
    : firstName(rhs.firstName), middleName(rhs.middleName), lastName(rhs.lastName), suffix(rhs.suffix), doctor(rhs.doctor), priority(rhs.priority){
}

//operator= overload
const Patient& Patient::operator=(const Patient& rhs){
    //alias test
    if (this != &rhs){
        firstName = rhs.firstName;
        middleName = rhs.middleName;
        lastName = rhs.lastName;
        suffix = rhs.suffix;
        doctor = rhs.doctor;
        priority = rhs.priority;
    }
    return *this;
}


