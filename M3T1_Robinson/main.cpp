//Justin Robinson
// 1-5-2019
// CSC 134
//for loop M3T1

#include <iostream>

using namespace std;

int main()
{
    // ask user for number of tests to average
    int grade;
    int numTests;
    int average;
    int total = 0; //accumulator


    cout << "Input the number of tests you would like to average. ";
    cin >> numTests;

    //within loop, ask for a test grade
    for (int count=1; count <= numTests; count ++)
        {
        cout << "Grade for test #" << count << "? ";
        cin >> grade;
        total = total + grade;
        }

    cout << "Total = " << total << endl;

    //find average by dividing total by number of tests
    average = total / numTests;
    cout << "The average is " << average << endl;




    //ONLY ONE RETURN
    return 0;
}
