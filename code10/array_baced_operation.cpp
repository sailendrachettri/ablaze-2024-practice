/*
Today: 09 - January 2024
Author: Sailendra Chettri
Purpose: Create array based operation(insert, delete, search)
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void insertion();
void deletion();
void searching();
void printArray(vector<int> arr, int);

vector<int> arr = {9, 0, 8, 3, 4, 2};

int main()
{
    int userChoice = 0;

    cout << "\nWhat you wanna perform: \n\t1. Insert\n\t2. Delete\n\t3. Search\n\nEnter your choice: ";
    cin >> userChoice;    

    if(userChoice == 1){
        cout << "\nInsert operation initiated..." << endl;
        insertion();

    }

    else if(userChoice == 2){
        cout << "Delete operation initiated..." << endl;
        deletion();
    }

    else if(userChoice == 3){
        cout <<"Search operation initiated..." << endl;
        searching();
    }

    else
        cout <<"No operation found re-enter the choice"<<endl;

    return 0;
}

void insertion(){
    int size, val;

    cout << "Enter the size of an array: ";
    cin>> size;

    cout << "Enter " << size <<" elements: ";
    for(int i = 0; i < size; i++){
        cin >> val;
        arr.push_back(val);
    }

    // printing
    cout << "\nNew array created with this element(s): ";
    for(auto val : arr){
        cout << val << " ";

    }cout << endl;
}

void deletion(){
    int size = arr.size();
    int deleteChoice, ind = -1;

    if(size > 0){
        cout << "\nAvailable elements: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }

        cout << "\nWhich element you want to delete: ";
        cin >> deleteChoice;

        // find ind to be deleted
        for(int i = 0; i < size; i++){
            if(deleteChoice == arr[i]){
                ind = i;
                break;
            } 
        }

        if(ind == -1){
            cout << "No Element found. So, NOT deleted.\n";
            return;
        }

        // delete the element
        for(int i = ind; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        arr.pop_back();
        size--;

        // print after deletion
        cout << "\nElements after deletion: ";
        printArray(arr, size);

    } else {
        cout << "You don't have any elements. So, CANNOT be deleted." << endl;
        return;
    }
}

void searching(){
    int element;
    int size = arr.size();

    if(size > 0){
        cout << "\nWhich element you are looking for: ";
        cin >> element;

        for(int i = 0; i < size; i++){
            if(arr[i] == element)
                cout << element << " is present at index " << i << endl;
        }
    } else
        cout << "Your array is empty. Try creating one." << endl;
}

void printArray(vector<int> arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}