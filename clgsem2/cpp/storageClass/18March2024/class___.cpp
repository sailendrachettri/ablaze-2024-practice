#include<iostream>
using namespace std;

class sample{
    private:
        int d1;
        char d2;

    public:
        void set(int a, char b){
            d1 = a;
            d2 = b;
        }
        void get(){
            cout << "d1: " << d1 << endl;
            cout << "d2: " << d2 << endl;
        }

};

int main()
{ 
    cout << endl << endl;


    sample *sa;

    try{
        sa = new sample();

    } catch(bad_alloc err){
        // cout << "No memeory allocation." << err << endl; // error
        cout << "No memeory allocation."  << endl;
        
        return 1;
    }

    sa->set(25, 'x');  
    sa->get();

    delete sa;



    cout << endl << endl;
    return 0;
}