// // Define a class Student having member variables roll and name. Now, define instance member functions to set data of these member variables and get these member variables.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

#define MAX_CHARS_NAME 31

// // use namespace
using namespace std;

// // define class Student
class Student
{
    char name[MAX_CHARS_NAME];
    int roll;

public:
    // instance member function to set roll
    void setRoll(int r)
    {
        roll = r;
    }

    // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // instance member function to get roll
    int getRoll()
    {
        return roll;
    }

    // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }
};

// // Main Function Start
int main()
{
    Student s1; // create object of Student
    char name[MAX_CHARS_NAME];
    int roll;

    // // Get student's Data
    cout << "\nEnter Student's Roll Number => ";
    cin >> roll;

    cout << "\nEnter Student's Name (MAX_CHARACTERS " << MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, MAX_CHARS_NAME);

    // // set students's data
    s1.setRoll(roll);
    s1.setName(name);

    // // get and display students's data
    cout << "\nStudent's Roll Number => " << s1.getRoll();
    cout << "\nStudent's Name => " << s1.getName(name);

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End