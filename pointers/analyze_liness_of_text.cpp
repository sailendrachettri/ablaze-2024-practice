/*
Today: 10 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Count vowels, consonent, numbers and whitespaces
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void countChar(int *, int *, int *, int *, int *, string);

int main()
{
    string str;
    int vowel = 0;
    int consonent = 0;
    int numbers = 0;
    int spaces = 0;
    int others = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    countChar(&vowel, &consonent, &numbers, &spaces, &others, str);

    cout << "There are " << vowel << " vowels." << endl;
    cout << "There are " << consonent << " consonent." << endl;
    cout << "There are " << numbers << " numbers." << endl;
    cout << "There are " << spaces << " spaces." << endl;
    cout << "There are " << others << " others." << endl;

    return 0;
}

void countChar(int *vowel, int *consonent, int *numbers, int *spaces, int *others, string str){

    int len = str.size();
    int tempLen = len;

    int i = 0;
    while(tempLen != 0){

        str[i] = tolower(str[i]);

        if(str[i] == ' ')
           ++ *(spaces);

        else if(str[i] >= '0' && str[i] <= '9')
           ++ *(numbers);
        
        else if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                ++ *(vowel);
            else
               ++ *(consonent);        
        }
        else
           ++ *(others);       
        
        i++; tempLen--;
    }

}