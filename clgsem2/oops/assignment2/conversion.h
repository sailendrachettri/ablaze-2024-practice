// define all function here
#include <string>
using namespace std;

#ifndef CONVERSION_H
#define CONVERSION_H
    double convert(double value, string from, string to, bool isWeight);
    double convert(double value, string from, string to, char type);
    double convert(double value, string from, string to);
    
#endif