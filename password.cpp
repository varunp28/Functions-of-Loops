#include <iostream>
#include <string>
using namespace std;

int verifyPassword( string& input, string& correctPassword) {
    if (input == correctPassword)
        return 1;  
    else
        return 0;  
}

int main() {
    string correctPassword = "OpenSesame";      
    int attempts = 0;
    int maxAttempts = 3;
    int accessGranted = 0;  
    string userInput;  

    while (attempts < maxAttempts) {
        cout << "Enter password: ";
        getline(cin, userInput);

        if (verifyPassword(userInput, correctPassword) == 1) {
            cout << "Access Granted! Welcome!" << endl;
            accessGranted = 1;
            break;
        } else {
            attempts++;
            cout << "Incorrect password. Try again." << endl;
            cout << "Attempts left: " << (maxAttempts - attempts) << endl;
        }
    }

    if (accessGranted == 0) {
        cout << "System Locked! Too many incorrect attempts." << endl;
    }

    return 0;
}


Enter password: iammessi
Incorrect password. Try again.
Attempts left: 2
Enter password: iamrondo
Incorrect password. Try again.
Attempts left: 1
Enter password: correctPassword
Incorrect password. Try again.
Attempts left: 0
System Locked! Too many incorrect attempts.

