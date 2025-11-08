#include <iostream>
using namespace std;

int main() {
    int n;                      // number of students
    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];                // array to store roll numbers
    cout << "Enter roll numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> roll[i];         // input each roll number
    }

    int key;
    cout << "Enter roll number to search: ";
    cin >> key;

    bool found = false;         // flag to mark if found or not

    // Linear search loop
    for (int i = 0; i < n; i++) {
        if (roll[i] == key) {   // check if this roll matches
            found = true;
            break;              // stop searching
        }
    }

    if (found)
        cout << "Student attended the training program.\n";
    else
        cout << "Student did NOT attend the training program.\n";

    return 0;
}
