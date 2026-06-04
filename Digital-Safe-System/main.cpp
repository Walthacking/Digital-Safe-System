#include <iostream>
#include <string>

using namespace std;

int main()
{
    string correctPin = "2544";
    string enteredPin;

    int attempts = 0;
    int maxAttempts = 3;

    cout << "====== DIGITAL SAFE SYSTEM ======\n";

    while (attempts < maxAttempts)
    {
        cout << "\nEnter PIN: ";
        cin >> enteredPin;

        if (enteredPin == correctPin)
        {
            cout << "\nACCESS GRANTED\n";
            cout << "Safe Unlocked.\n";
            return 0;
        }
        else
        {
            attempts++;

            cout << "\nINCORRECT PIN\n";
            cout << "Attempts Remaining: "
                 << maxAttempts - attempts << endl;
        }
    }

    cout << "\nALARM ACTIVATED\n";
    cout << "SAFE LOCKED\n";

    return 0;
}