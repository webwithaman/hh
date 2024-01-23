// // Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Time
class Time
{
    // instance member variables
    int hours;
    int minutes;
    int seconds;

public:
    // instance member function to set compelx number
    void setTime(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    // instance member function to display
    void displayTime()
    {
        cout << "\n"
             << hours << " hr " << minutes << " min " << seconds << " sec " << endl;
    }
};

// // Main Function Start
int main()
{
    Time t1; // create object of Time
    int hr, min, sec;

    // Get Time number
    cout << "\n>>>>>>>> Enter Time <<<<<<<<<\n";
    cout << "\nEnter Hours => ";
    cin >> hr;
    cout << "\nEnter Minutes => ";
    cin >> min;
    cout << "\nEnter Seconds => ";
    cin >> sec;

    t1.setTime(hr, min, sec); // set time

    cout << "\n>>>>>>>> Entered Time <<<<<<<<<";
    t1.displayTime(); // display time

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End