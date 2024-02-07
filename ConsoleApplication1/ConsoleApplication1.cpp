// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//written by Jayy Wattman on 2/6/2024

#include <iostream>

using namespace std;

void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: " << endl;
}

void factorial() {
    //write factorial code here
    cout << "Factorial:" << endl;
    cout << "Enter a number: ";
    cin >> n
}

void arithmetic() {
    //write arithmetic series code here
}

void geometric() {
    //write geometric series code here
}

int main() {
    int choice;
    char again;

    do {
        printMenu();
        cin << choice;

        //Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }

        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }

        cout << "Go Again? [Yes/No] ";
        cin >> again;

    } while (again == 'y' || again == 'Y')
}

