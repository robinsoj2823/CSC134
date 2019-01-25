//Justin Robinson
//CSC 134
// 1/25/2019

#include <iostream>

using namespace std;

int main()
{
    //Listing 3-1
    int mynumber;
    mynumber = 10;
    cout << mynumber << endl;

    //Listing 3-2
    mynumber = 10;
    cout << mynumber << endl;
    mynumber = 20;
    cout << mynumber << endl;

    //Listing 3-3
    int start = 50;
    int finish;
    finish = start;
    cout << finish << endl;

    //Listing 3-4
    int final;
    int time;
    final = 28;
    time = 18;
    cout << final - time << endl;

    //Listing 3-5
    int first, second;
    cout << "Dividing 28 by 14." << endl;
    first = 28;
    second = 14;
    cout << "Quotient " << first / second << endl;
    cout << "Remainder " << first % second << endl;
    cout << "Dividing 32 by 6." << endl;
    first = 32;
    second = 6;
    cout << "Quotient " << first / second << endl;
    cout << "Remainder " << first % second << endl;

    //Listing 3-6
    string mystring;
    mystring = "abcdef";
    cout << mystring[2] << endl;

    //Listing 3-7
    mystring = "Hello there";
    cout << mystring << endl;

    //Listing 3-8
    first = 10;
    second = 20;
    string result;
    result = first == second ? "equal" : "not equal";
    cout << result << endl;

    //Listing 3-9
    string name;
    cout << "Type your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;
    return 0;
}
