#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib> // For system("clear") on Unix-like systems

int main() {
    while(true) {
        // Get current time
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::string current_time = std::ctime(&now);
        
        // Write current time to a text file
        std::ofstream outfile("current_time.txt");
        if (outfile.is_open()) {
            outfile << current_time;
            outfile.close();
        } else {
            std::cerr << "Unable to open file for writing!\n";
            return 1;
        }

        // Sleep for one second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
