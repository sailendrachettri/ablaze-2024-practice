#include <iostream>
using namespace std;

void lowerCase(string str){
    for(char &ch : str)
        ch = tolower(ch);

    cout << "lowercase: " << str << endl;
}

void upperCase(string str){
    for(char &ch : str)
        ch = toupper(ch);

    cout << "UPPERCASE: " << str << endl;
}

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    lowerCase(str);
    upperCase(str);
    

    return 0;
}