#include "FileLogger.h"

FileLogger::FileLogger() {

}

FileLogger& FileLogger::getInstance(){
    static FileLogger instance;
    return instance;
}
void FileLogger::log(const Patient& patient, bool reportAll) const{

    if (reportAll){
        ofstream outClientFile1("patientReport.txt", ios::app);

        if (!outClientFile1){
            cerr << "File could not be opened" << endl;
            exit(3);
        }

        outClientFile1 << setw(50) << left << "First Name: " << setw(50) << left << patient.getFirstName() << endl;
        outClientFile1 << setw(50) << left << "Middle Name: " << setw(50) << left << patient.getMiddleName() << endl;
        outClientFile1 << setw(50) << left  << "Last Name: " << setw(50) << left <<  patient.getLastName() << endl;
        outClientFile1 << setw(50) << left << "Suffix: " << setw(50) << left << patient.getSuffix() << endl;
        for(const string eachAilment : patient.getAliment()) {
            outClientFile1 << setw(50) << left << "Ailment: " << setw(50) << left << eachAilment << endl;
        }
        outClientFile1 << setw(50) << left << "Doctor: " << setw(50) << left << patient.getDoctor() << endl;
        outClientFile1 << setw(50) << left << "Treated: " << setw(50) << left <<  patient.getIsTreated() << endl;
        outClientFile1 << setw(50) << left << "Priority: " << setw(50) << left << patient.getPriority() << endl;
        outClientFile1 << endl;

    }
    else {
        ofstream outClientFile("patientReport.txt", ios::out);

        if (!outClientFile){
            cerr << "File could not be opened" << endl;
            exit(2);
        }

        outClientFile << setw(50) << left << "First Name: " << setw(50) << left << patient.getFirstName() << endl;
        outClientFile << setw(50) << left << "Middle Name: " << setw(50) << left << patient.getMiddleName() << endl;
        outClientFile << setw(50) << left << "Last Name: " << setw(50) << left << patient.getLastName() << endl;
        outClientFile << setw(50) << left << "Suffix: " << setw(50) << left << patient.getSuffix() << endl;
        int i = 0;
        while (i < patient.getAliment().size()) {
            outClientFile << setw(50) << left << "Ailment: " << setw(50) << left << patient.getAliment()[i++] << endl;
        }
        outClientFile << setw(50) << left << "Doctor: " << setw(50) << left << patient.getDoctor() << endl;
        outClientFile << setw(50) << left << "Treated: " << setw(50) << left << patient.getIsTreated() << endl;
        outClientFile << setw(50) << left << "Priority: " << setw(50) << left << patient.getPriority() << endl;
    }
}

void FileLogger::clearLog() const {
    ofstream outClientFile("patientReport.txt", ios::out);

    if (!outClientFile){
        cerr << "File could not be opened" << endl;
        exit(4);
    }

    outClientFile.clear();
    outClientFile.close();
}