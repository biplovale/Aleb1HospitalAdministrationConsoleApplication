#include "Patient.h"

//Constructor
Patient::Patient(string fName, string mName, string lName, string suf, vector<string> ail, string doc, bool isT, unsigned int pri)
    : firstName(fName), middleName(mName), lastName(lName), suffix(suf), ailment(ail), doctor(doc), isTreated(isT), priority(pri){
}

//Destructor
Patient::~Patient(){

}

//Copy constructor
Patient::Patient(const Patient& rhs)
    : firstName(rhs.firstName), middleName(rhs.middleName), lastName(rhs.lastName), suffix(rhs.suffix), ailment(rhs.ailment), doctor(rhs.doctor), isTreated(rhs.isTreated), priority(rhs.priority){
}

//operator= overload
Patient& Patient::operator=(const Patient& rhs){
    //alias test
    if (this != &rhs){
        firstName = rhs.firstName;
        middleName = rhs.middleName;
        lastName = rhs.lastName;
        suffix = rhs.suffix;
        doctor = rhs.doctor;
        isTreated = rhs.isTreated;
        priority = rhs.priority;
    }
    return *this;
}

//getter and setters
string Patient::getFirstName() const{
    return firstName;
}
string Patient::getMiddleName() const{
    return middleName;
}
string Patient::getLastName() const{
    return lastName;
}
string Patient::getSuffix() const{
    return suffix;
}
vector<string> Patient::getAliment() const{
    return ailment;
}
bool Patient::getIsTreated() const {
    return isTreated;
}
void Patient::setIsTreated(bool b) {
    isTreated = b;
}
string Patient::getDoctor() const{
    return doctor;
}
unsigned int Patient::getPriority() const{
    return priority;
}


