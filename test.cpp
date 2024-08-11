// C++ program to Add Timed Delay in C++?

#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

using namespace std;

int main()
{      
    int hours;
    int minutes;
    int seconds;
    bool t = true;
    cout << "Set a timer" << endl;
    cout << "How many hours: " << endl;
    cin >>hours;
    cout << "How many minutes: " << endl;
    cin >> minutes;
    cout << "How many seconds: " << endl;
    cin >> seconds;
    long int timer = (hours * 60 * 60) + (minutes * 60) + seconds;
    while (t){
    cout << "Starting the countdown..." << endl;

    for (int i = timer; i > 0; --i) {
        // Printing the remaining seconds
        cout << i << " seconds remaining" << endl;

        // Waiting for 1 second
        this_thread::sleep_for(chrono::seconds(1));
    }
    t = false;
    }
    Beep(5399,2000); // 523 hertz (C5) for 500 milliseconds     
    cin.get(); // wait 
    
    cout << "Time's up!" << endl;
    system("pause");
    return 0;
}
