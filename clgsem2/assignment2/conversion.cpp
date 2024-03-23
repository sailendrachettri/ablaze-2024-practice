// perform conversion
#include <string>
#include <iostream>
#include "conversion.h"

using namespace std;

double convert(double value, string from, string to, bool isWeight)
{
    cout << "\nWait! Weight conversion processing..." << endl;
    if (isWeight)
    { // Ensure this is a weight conversion
        if (from == "Kilograms" && to == "Pounds")
        {
            return value * 2.20462;
        }
        else if (from == "Pounds" && to == "Kilograms")
        {
            return value / 2.20462;
        }
    }
    return value;
}

double convert(double value, string from, string to, char type)
{
    cout << "\nWait! Length conversion processing..." << endl;
    if (type == 'L')
    { // Ensure this is a length conversion
        if (from == "Meters" && to == "Yards")
        {
            return value * 1.09361;
        }
        else if (from == "Yards" && to == "Meters")
        {
            return value / 1.09361;
        }
    }
    return value;
}

double convert(double value, string from, string to)
{
    cout << "\nHold on! Temperature conversion processing..." << endl;

    if (from == "Celsius" && to == "Fahrenheit")
    {
        return value * 9 / 5 + 32;
    }
    else if (from == "Fahrenheit" && to == "Celsius")
    {
        return (value - 32) * 5 / 9;
    }
    return value; // If units are the same or conversion is not supported
}