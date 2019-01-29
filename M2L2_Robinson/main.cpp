//Justin Robinson
//1-29-2019
//CSC 134

#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "What is your number grade?" << endl;
    cin >> grade;

    if (grade >= 90)
    {
        cout << "Your grade is an A." << endl;
    }
    else if (grade >= 80)
    {
        cout << "Your grade is a B." << endl;
    }
    else if (grade >= 70)
    {
        cout << "Your grade is a C." << endl;
    }
    else if (grade >= 60)
    {
        cout << "Your grade is a D." << endl;
    }
    else
    {
        cout << "Your grade is an F." << endl;
    }
    //ONLY ONE RETURN
    return 0;
}
