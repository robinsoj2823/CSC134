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



void printMainMenu()
{
    cout << " -- Main Menu --" << endl;
    cout << "Option 1. Temp Converter" << endl;
    cout << "Option 2. Arithmetic" << endl;
    cout << "Option 0. Exit Program" << endl;
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
    float tempK;
    float tempC;
    int selection;

    do
    {
    cout << "3. K to C" << endl;
    cout << "4. C to K" << endl;
    cout << "5. Exit Program" << endl;
    cin >> selection;
        switch (selection)
        {
        case 3: cout << "Value of Kelvin converted to Celsius: ";
            cin >> tempK;
            tempC = convertKtoC(tempK);
            cout << tempC << endl;
        break;
        case 4: cout << "Value of Celsius converted to Kelvin: ";
            cin >> tempC;
            tempK = convertCtoK(tempC);
            cout << tempK << endl;
        break;
        case 5: cout << "Exiting" << endl;
        break;
        default:
            cout << "Invalid option" << endl;

        }
    } while (selection != 5);
}






    int mainArithmetic()
    {
        int first;
        int second;
        char opcode;

        do
        {
            cout << "Enter an expression to be calculated." << endl;
            cout << "Example: 4 + 5, 10 - 6, 2 * 2, 16 / 4" << endl;
            cout << " 0!0 to exit program" << endl;
            cin >> first >> opcode >> second;

            switch (opcode)
            {
                case '+': cout << add (first, second) << endl;
                break;
                case '-': cout << subtract (first, second) << endl;
                break;
                case '/': cout << divide (first, second) << endl;
                break;
                case '*': cout << multiply (first, second) << endl;
                break;
                case '!': cout << "Exiting" << endl;
                break;
                default: cout << "Invalid Option" << endl;
            }
        }while (opcode != '!');
    }
    //only one return


