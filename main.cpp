/*
 * Assignment : Hospital Administration Console Application
 * Course : CSC 502-001 : Advance Programming Methods
 * Instructor : Michael Clark Jr
 * Author : Biplov Ale
 * */

//Libraries
#include "HospitalAdministrationController.h"
#include "Patient.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <unistd.h>

using namespace std;

//Function prototypes
string convertToString(char* a);                                                                                        //converts a char array to string
void listNormalCommands();                                                                                              //lists all the possible commands in normal mode
void listDebugCommands();                                                                                               //lists all the possible commands in debug mode //add patient to triage system

//Console Interface
int main(){
    cout << "\n" << setw(60) << right << "HOSPITAL" << " ADMINISTRATION CONSOLE APPLICATION" << endl;

    const int SIZE = 60;
    char buffer[SIZE];                                                                                                  //buffer for user input
    HospitalAdministrationController HAController = HospitalAdministrationController();

    //normal mode loop
    cout << "To view a guide to all commands, TYPE: help" << "\nTo exit, TYPE: exit" << "\nCommand<>: ";
    cin.getline(buffer, SIZE);
    while (strcmp(buffer, "exit") != 0){
        if(strcmp(buffer, "help") == 0){
            listNormalCommands();
        }
        else if (strcmp(buffer, "add patient") == 0){
            string fName, mName, lName, suf;
            vector<string> ailment;
            string doctor;
            bool isTreated;
            unsigned int priority;

            string eachAilment;
            int numOfAilment;
            int numOfPatient;

            //user inputs
            cout << "How many patients do you want to add?\n=> ";
            cin >> numOfPatient;
            cin.ignore();
            for(int j = 1; j <= numOfPatient; j++){
                cout << "Enter first name:\n";
                getline(cin, fName);
                cout << "Enter middle name:\n";
                getline(cin, mName);;
                cout << "Enter last name:\n";
                getline(cin, lName);;
                cout << "Enter suffix (\"None\" if not applicable):\n";
                getline(cin, suf);;
                cout << "Number of ailment to be added:\n";
                cin >> numOfAilment;               //needs exception handler
                for(int i = 1; i <= numOfAilment; i++){
                    cout << "Enter ailment:\n";
                    getline(cin, eachAilment);
                    ailment.push_back(eachAilment);
                }
                cout << "Enter doctor to be assigned:\n";
                getline(cin, doctor);
                cout << "Enter if patient is treated (\"1 = true\" or \"0 = false\"):\n";
                cin >> isTreated; //needs exception handling
                cout << "Enter priority metric (int from 0):\n";
                cin >> priority;        //needs exception handling
                cin.ignore();

                Patient patient(fName, mName, lName, suf, ailment, doctor, isTreated, priority);
                HAController.addPatient(patient);
            }
        }
        else if (strcmp(buffer, "treat patient") == 0){
            if(!HAController.getTreatedTriageList().empty()) {
                int random = rand() % (4 - 2 + 1) + 1;
                sleep(random);
                HAController.removePatient();
            }
        }
        else if (strcmp(buffer, "report patient") == 0){
            cout << "report patient" << endl;
        }
        else if (strcmp(buffer, "print report patient") == 0){
            cout << "print report patient" << endl;
        }
        else if (strcmp(buffer, "report -n patient") == 0){
            cout << "report -n patient" << endl;
        }
        else if (strcmp(buffer, "report patient NAME") == 0){
            cout << "report patient NAME" << endl;
        }
        else if (strcmp(buffer, "print report -td patients") == 0){
            cout << "print report -td patient" << endl;
        }
        else if (strcmp(buffer, "print report -t patients") == 0){
            cout << "print report -t patients" << endl;
        }
        else if (strcmp(buffer, "treat all") == 0){
            cout << "treat all" << endl;
        }
        else if (strcmp(buffer, "print report -d patients") == 0){
            cout << "print report -d patients" << endl;
        }
        else if (strcmp(buffer, "log operations") == 0){
            cout << "log operations" << endl;
        }
        else if (strcmp(buffer, "clear") == 0){
            system("cls");
        }
        else if (strcmp(buffer, "mode debug") == 0){
            //Debug mode loop
            cout << "\nTo view a guide to all commands, TYPE: help" << "\nTo exit Debug mode, TYPE: exit" << "\nCommand<Debug>: ";
            cin.getline(buffer, SIZE);
            while (strcmp(buffer, "exit") != 0) {
                if(strcmp(buffer, "help") == 0){
                    listDebugCommands();
                }
                else if (strcmp(buffer, "log operations") == 0){
                    cout << "debug log operations" << endl;
                }
                else if (strcmp(buffer, "clear") == 0){
                    system("cls");
                }
                else{
                    cout << "Invalid Debug Command" << endl;
                }
                cout << "\nTo view a guide to all commands, TYPE: help\nCommand<Debug>: ";
                cin.getline(buffer, SIZE);
            }
        }
        else{
            cout << "Invalid Command" << endl;
        }

        cout << "\nTo view a guide to all commands, TYPE: help" << "\nCommand<>: ";
        cin.getline(buffer, SIZE);
    }


    return 0;
}

//converts a char array to string
string convertToString(char* a){
    string s(a);
    return s;
}

//lists all the possible commands in normal mode
void listNormalCommands(){
    cout << "All Normal mode commands:" << endl;
    string list = "\texit                               = exit from the app\n"
                       "\tadd patient                        = add a patient to the triage system\n"
                       "\ttreat patient                      = treat the present patient in triage order\n"
                       "\treport patient                     = show a detail report of the present patient in triage order\n"
                       "\tprint report patient               = write out a detail report of the present triage patient in a .txt\n"
                       "\treport -n patient                  = show a detail report of the next patient in triage order\n"
                       "\treport patient NAME                = show a detail report of the NAME provided patient\n"
                       "\tprint report -td patients          = write out a detail report of all treated patients in a .txt\n"
                       "\tprint report -t patients           = write out a detail report of all triage patients in a .txt\n"
                       "\ttreat all                          = treat all patients in triage\n"
                       "\tprint report -d patients           = write out a detail report all patients by doctor in a .txt\n"
                       "\tadd -b patient FILENAME.txt        = bulk add patients to the triage system from a .txt\n"
                       "\tlog operations                     = write out all executed system operations in a .txt\n"
                       "\tmode debug                         = to turn on debug mode\n"
                       "\tclear                              = clear console";
    cout << list << endl;
}

//lists all the possible commands in debug mode
void listDebugCommands(){
    cout << "All Debug mode commands:" << endl;
    string list =      "\texit                              = exit debug mode\n"
                       "\tlog operations                    = show all executed system operations in console\n"
                       "\tclear                             = clear console";
    cout << list << endl;
}