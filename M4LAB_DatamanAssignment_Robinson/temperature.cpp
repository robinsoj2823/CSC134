#include <iostream>


//contains various temp conversions functions, including the menus
//can't figure out why keeps saying will always evaluate as 'true'
// answer always comes out to 1


float convertKtoC (float tempK)
{

    float tempC = tempK - 273.15;
    return tempC;
}

float convertCtoK (float tempC)
{
    float tempK = tempC + 273.15;
    return tempK;
}
