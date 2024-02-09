#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> st;
    int n = 5;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter numbers: ";
    while(n){
        int ele;
        cin >> ele;
        st.insert(ele);
        n--;
    }

    for(int val : st)
        cout << val << " ";
    cout << endl;

    

    
    

    return 0;

}