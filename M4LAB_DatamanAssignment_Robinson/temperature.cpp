#include <iostream>


//contains various temp conversions functions, including the menus


float convertKtoC(float num1, float tempk)
{

    float tempC = num1 - 273.15;
    return tempC;
}

float convertCtoK(float num1, float tempC)
{
    float tempK = num1 + 273.15;
    return tempK;
}
