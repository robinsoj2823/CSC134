//Justin Robinson
//CSC 134
//2-21-2019
//M4Lab

#include <iostream>
#include "arithmetic.h"
#include "temperature.h"


using namespace std;

void mainMenu();
int mainArithmetic();
void printMainMenu();
void tempConvertMenu();


int main()
{
    mainMenu();


    return 0;
}

int mainArithmetic()
{


    // main calculator loop
    int first;
    int second;
    char opcode;

    cout << "Enter an expression to be calculated." << endl;
    cout << "Example: 4 + 5, 10 - 2, 9 / 3, 7 * 7" << endl;
    cin >> first >> opcode >> second;

    if (opcode == '+')
    {
        cout << add(first, second) << endl;
    }
    else if (opcode == '-')
    {
        cout << subtract(first, second) << endl;
    }
    else if (opcode == '/')
    {
        cout << divide(first, second) << endl;
    }
    else if (opcode == '*')
    {
        cout << multiply(first, second) << endl;
    }
    else
    {
        cout << "Operation invalid" << endl;

    }
    //only one return
}



void printMainMenu()
{
    cout << " -- Main Menu --" << endl;
    cout << "Option 1. Temp Converter" << endl;
    cout << "Option 2. Arithmetic" << endl;
}



void mainMenu()
{
    int choice;
    do
    {
        printMainMenu();
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1. Temp Converter" << endl;
            tempConvertMenu();
            break;
        case 2:
            cout << "2. Arithmetic" << endl;
            mainArithmetic();
            break;
        case 0:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (choice != 0);
}



void tempConvertMenu()
{
    float num1;
    int selection;
    float tempC;
    float tempK;


    do
    {
    cout << "1. K to C" << endl;
    cout << "2. C to K" << endl;
    cout << "3. Back" << endl;
    cin >> selection;
        switch (selection)
        {
        case 1: cout << "Numerical value: ";
            cin >> num1;
            cout << tempC << endl;
        break;
        case 2: cout << "Numerical value: ";
            cin >> num1;
            cout << tempK << endl;
        break;
        case 3: printMainMenu();
        default:
            cout << "Invalid opotion" << endl;

        }
    } while (selection != 3);
}

