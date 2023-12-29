#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter size of an array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Find unique elements and store them in newArr
    int newArr[size]; // This might still leave extra space, but let's keep it simple for now

    int newSize = 0; // Track the size of newArr

    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    // Printing the unique elements stored in newArr
    cout << "Unique elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
