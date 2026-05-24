#include <iostream>
using namespace std;

void calculateResults(int marks[], int size, int &total, float &average) {
    total = 0;


    for (int i = 0; i < size; i++) {
        total += marks[i];
    }


    average = total / (float)size;
}

int main() {
    string name;
    int marks[3];
    int total;
    float average;
    char choice;

    do {

        cout << "\nEnter student name: ";
        cin >> name;


        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }


        calculateResults(marks, 3, total, average);


        cout << "\n--- Result ---\n";
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;


        if (average >= 50) {
            cout << "Status: PASS\n";
        } else {
            cout << "Status: FAIL\n";
        }


        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nProgram Ended.\n";

    return 0;
}
