#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;
int main()
{
    while (true)
    {
        auto now = chrono::system_clock::now();
        auto now_c = chrono::system_clock::to_time_t(now);
        auto parts = localtime(&now_c);
        
        cout << put_time(parts, "%T") << endl;

        // Wait until the next second
        this_thread::sleep_until(now + chrono::seconds(1));

        // clear screen in unix-based OS 
        cout << "\033[2J\033[1;1H"; 
                                    
    }
    return 0;
}