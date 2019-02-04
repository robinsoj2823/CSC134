//Justin Robinson
//2-03-2019
//CSC 134

#include <iostream>

using namespace std;

int main()
{
    //Number 1
    int width;
    int length;
    int product;

    cout << "1. What is the Width and Length of the rectangle?" << endl;
    cout << "The Width of the rectangle is? ";
    cin >> width;
    cout << "The Length of the rectangle is? ";
    cin >> length;
    product = (width * length);
    cout << "The area of the rectangle is " << product << endl;




    //Number 2
    int celsius;
    int conversion;

    cout << "2. Convert Celsius to Fahrenheit." << endl;
    cout << "What is the degree in Celsius? ";
    cin >> celsius;
    conversion = (celsius * 1.8) + 32;
    cout << "The degree in Fahrenheit is " << conversion << endl;




    //Number 4
    int grade1;
    int grade2;
    int grade3;
    float grade;

    cout << "4. What are three of your number grades? Round up to the highest number." << endl;
    cin >> grade1;
    cin >> grade2;
    cin >> grade3;
    grade = (grade1 + grade2 + grade3) / 3;
    cout << "Your average grade is " << grade << endl;

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




    //Number 5
    float widthFeet;
    float lengthFeet;
    float area;
    float primer;
    float paint;

    cout << "5. How much of the supplies will be needed to remodel a room." << endl;
    cout << "What is the Width of the wall in feet? ";
    cin >> widthFeet;
    cout << "What is the Length of the wall in feet? ";
    cin >> lengthFeet;
    area = (widthFeet * lengthFeet);
    cout << "The square feet of that wall is " << area << endl;
    primer = (area / 250);
    cout << "With 1 gallon of primer covering 250 square feet." << endl;
    cout << "You will need " << primer << " gallons of paint." << endl;
    paint = (area / 350);
    cout << "With 1 gallon of paint covering 350 square feet." << endl;
    cout << "You will need " << paint << " gallons of paint." << endl;






    //ONLY ONE RETURN
    return 0;
}
