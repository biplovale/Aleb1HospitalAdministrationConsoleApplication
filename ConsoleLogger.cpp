#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger() {

}

ConsoleLogger& ConsoleLogger::getInstance(){
    static ConsoleLogger instance;
    return instance;
}
void ConsoleLogger::log(const Patient& patient) const{
    cout << endl;
    cout << setw(50) << left << "First Name: " << setw(50) << left << patient.getFirstName() << endl;
    cout << setw(50) << left << "Middle Name: " << setw(50) << left << patient.getMiddleName() << endl;
    cout << setw(50) << left  << "Last Name: " << setw(50) << left <<  patient.getLastName() << endl;
    cout << setw(50) << left << "Suffix: " << setw(50) << left << patient.getSuffix() << endl;
    for(const string eachAilment : patient.getAliment()) {
        cout << setw(50) << left << "Ailment: " << setw(50) << left << eachAilment << endl;
    }
    cout << setw(50) << left << "Doctor: " << setw(50) << left << patient.getDoctor() << endl;
    cout << setw(50) << left << "Treated: " << setw(50) << left <<  patient.getIsTreated() << endl;
    cout << setw(50) << left << "Priority: " << setw(50) << left << patient.getPriority() << endl;
}