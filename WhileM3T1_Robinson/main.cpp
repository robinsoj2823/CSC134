//Justin Robinson
//1-5-2019
//CSC 134
//While loop

#include <iostream>

using namespace std;

int main()
{
    int grade;
   int numTests;
   int average;
   int total = 0;
   int count = 1;

   cout << "Input the number of tests you would like to average. ";
   cin >> numTests;

   while (count<=numTests)
    {
        cout << "Grade for test # " << count <<  "? ";
        count ++;
        cin >> grade;
        total = total + grade;
    }

    cout << "Total = " << total << endl;

    average = total / numTests;

    cout << "The average is " << average << endl;
    return 0;
}
