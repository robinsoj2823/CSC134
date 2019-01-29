//Justin Robinson
//1-29-2019
//CSC 134

#include <iostream>

using namespace std;

int main()
{
    //IfElse
    int i;

    cout << "Type any number: " << endl;
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }


    //IfElse2
    int i2;

    cout << "Type any number: " << endl;
    cin >> i2;

    if (i2 > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else if (i2 == 10)
    {
        cout << "It's equal to 10" << endl;
    }
    else
    {
        cout << "It's less than 10." << endl;
    }


    //IfElse3
    int i3;

    cout << "Type any number: " << endl;
    cin >> i;

    if (i > 100)
    {
        cout << "It's greater than 100." << endl;
    }
    else if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's neither greater than 100 nor greater than 10." << endl;
    }



    //ForLoop
    int x = 0;
    int i4;

    for ( i4 = 1; i4 <= 100; i4++)
    {
        x += i4;
    }
    cout << x << endl;


    //ForCountdown
    int i5;

    for (i5=10; i5>=5; i5--)
    {
        cout << i5 << endl;
    }


    //ForLoop2
    double xA = 0.0;
    double i6;

    for (i6 = 0.0; i6 <= 100; i6 += 0.1)
    {
        xA += i6;
    }
    cout << xA << endl;



    //WhileLoop
    int i7 = 0;

    while (i7 <= 10)
    {
        cout << i7 <<endl;
        i7 ++;
    }
    cout << "All Finished!" << endl;


    //WhileLoop2
    int i8 = 0;
    bool done = false;

    while (!done)
    {
        cout << i8 << endl;
        i8 ++;
        if (i8 == 10)
            done = true;
    }
    cout << "All Finished!" << endl;


    //DoWhileLoop
    int i9 = 0;

    do
    {
        cout << i9 << endl;
        i9 ++;
    }
    while (i9 <= 10);

    cout << "All Finished!" << endl;

    //ONLY ONE RETURN
    return 0;
}
