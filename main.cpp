#include "Patient.h"
#include "ConsoleLogger.h"
#include "FileLogger.h"
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Function prototypes
string convertToString(char* a);
void listNormalCommands();
void listDebugCommands();

//Console Interface
int main(){
    cout << "\n" << setw(60) << right << "HOSPITAL" << " ADMINISTRATION CONSOLE APPLICATION\n" << endl;
    cout << "To view a guide to all commands, TYPE: help" << endl;

    //normal mode loop
    const int SIZE = 60;
    char buffer[SIZE];
    cout << "Command<>: ";
    cin.getline(buffer, SIZE);
    while (strcmp(buffer, "exit") != 0){
        cout << "\nCommand<>: ";
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
                       "\tlog operations                     = write out all executed system operations in a .txt";
    cout << list << endl;
}

//lists all the possible commands in debug mode
void listDebugCommands(){
    cout << "All Debug mode commands:" << endl;
    string list = "\tmode normal                       = to turn on normal mode\n"
                       "\texit debug                        = exit debug mode\n"
                       "\tlog operations                    = show all executed system operations in console";
    cout << list << endl;
}