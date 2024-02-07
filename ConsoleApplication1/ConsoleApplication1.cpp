// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//written by Jayy Wattman on 2/6/2024 to hopefully run factorial operations, arithmetic series, and geometric series based on inputted values

#include <iostream>

using namespace std;

void printMenu() //print the options out
{
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: " << endl;
  
}

void factorial() 
{
    //write factorial code here
    int n;
    int result = 1;

    cout << "Factorial:" << endl;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n < 0) 
    { //to force the user to input a pos number if they want a true result and not just hounding for a pos number
        cout << "Nope, please enter a POSITIVE number this time...: ";
        cin >> n;
    }

    cout << n << "! = ";

    for (int a = 1; a <= n; a++) //actual factorial operation
    {
        result = result * a;
        cout << a;
        if (a < n) 
        {
            cout << "*";
        }
    }
    cout << "= " << result << endl;
 }

void arithmetic() 
{
    //write arithmetic series code here
    //arithmetic series is the sum of the elements of an arithmetic progression
    int start; //starting number
    int diff; //short for 'difference'
    int ele; //short for 'elements' as in number of elements in series
    int temp;
    int sum = 0;

    cout << "Arithmetic Series:" << endl;
    cout << "Enter a number to start at: " << endl;
    cin >> start;

    cout << "Enter a number to add each time: " << endl;
    cin >> diff;
 
    cout << "Enter the number of elements in the series: " << endl;
    cin >> ele;

    for (int a = 0; a < ele; a++) //this is the part that actually does the math
    {
        temp = start + (a * diff);
        sum += temp;
        cout << temp;
        if (a < ele) //to show the operations, hopefully
        {
            cout << "+";
        }
        cout << (start + (a * diff));
    }
    cout << " = " << sum << endl;
}

void geometric() 
{
    //write geometric series code here
    //I want to state for the record that geometric series have always made my head hurt, so this could be ROUGH
    float startNum; //starting number
    int multi; //multiplier
    int eleNum; //number of elements
    float sum = 0;
    float temp;

    cout << "Geometric Series: " << endl;
    cout << "Enter a number to start at: ";
    cin >> startNum;

    cout << "Enter a number to multiply by each time: ";
    cin >> multi;
    
    cout << "Enter the number of elements in the series: ";
    cin >> eleNum;

    while (eleNum < 0) //once again forces the input to be positive by running an endless loop until user complies or exits
    {
        cout << "Try again, please enter a POSITIVE value this time: ";
        cin >> eleNum;
    }

    for (int a = 1; a < eleNum; a++) 
    {
        cout << startNum << " + ";
        temp = startNum * (pow(multi, a)); //the math for the sequence, though unsure if I understood the equation needed
        sum = sum + temp;
        if (a < eleNum)
        {
            cout << " + ";
        }

    }
    cout << " = " << sum << endl;
}

int main() {
    int choice;
    char again;

    do {
        printMenu();
        cin >> choice;

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

        cout << "Go Again? [Y/N] ";
        cin >> again;

    } while (again == 'y' || again == 'Y'); //allows user to repeat the program when answering with a y to the previous question
}

