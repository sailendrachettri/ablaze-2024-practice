#include <iostream>
#include "conversion.h"
using namespace std;

int main()
{
    int selectConType;

    cout << "\nSelect the conversion units: "
         << "\nEnter 1 for weight conversion: "
         << "\nEnter 2 for length conversion: "
         << "\nEnter 3 for temperature conversion: ";
    cin >> selectConType;

    double value, result;
    string from, to;
    char type;

    switch (selectConType)
    {
        case 1:
            cout << "\nYou've selected weight conversion! (Kilograms/Pounds)\n";
            cout << "Enter value, source unit, target unit: ";
            cin >> value >> from >> to;
            result = convert(value, from, to, true);
            cout << "Result: " << result << endl;
            break;

        case 2:
            cout << "\nYou've selected length conversion! (Meters/Yards)\n";
            cout << "Enter value, source unit, target unit, type: ";
            cin >> value >> from >> to >> type;

            result = convert(value, from, to, type);
            cout << "Result: " << result  << endl;
            break;

        case 3:
            cout << "\nYou've selected temperature conversion! (Celsius/Fahrenheit)\n";
            cout << "Enter value, source unit, target unit: ";
            cin >> value >> from >> to;

            result = convert(value, from, to);
            cout << "Result: " <<  result << endl;
            break;

        default:
            cout << "Invalid option" << endl;
            break;
    }

    return 0;
}
