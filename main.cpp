#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void listNormalCommands();
void listDebugCommands();

//Console Interface
int main(){
    cout << "\n\t\t\t\t\t\t\tHOSPITAL ADMINISTRATION CONSOLE APPLICATION" << endl;


    return 0;
}

//lists all the possible commands in normal mode
void listNormalCommands(){
    cout << "All Normal mode commands:" << endl;
    std::string list = "\texit                               = exit from the app\n"
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
    std::string list = "\tmode normal                       = to turn on normal mode\n"
                       "\texit debug                        = exit debug mode\n"
                       "\tlog operations                    = show all executed system operations in console";
    cout << list << endl;
}