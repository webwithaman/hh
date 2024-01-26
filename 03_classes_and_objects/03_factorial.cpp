// // Define a class Factorial and define an instance member function to find the Factorial of a number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Factorial
class Factorial
{

private:
    // // instance member variable
    int num;
    long long unsigned int factorial;

public:
    // // instance member function to set the value of num
    void setNumber(int n)
    {
        num = n;
    }

    // // instance member function to get the value of num
    int getNumber()
    {
        return num;
    }

    // // instance member function to calculate factorial of num
    void calculateFactorial()
    {
        factorial = 1;
        for (int i = 2; i <= num; i++)
            factorial *= i;
    }

    // // instance member function to get the factorial
    long long unsigned int getFactorial()
    {
        return factorial;
    }
};

// // Main Function Start
int main()
{
    Factorial f1; // create object of Factorial
    int num;
    long long unsigned int fact;

    // // Get a number to calculate factorial
    cout << "\nEnter A Number to Calculate Factorial => ";
    cin >> num;

    f1.setNumber(num); // set Number to calculate factorial

    f1.calculateFactorial(); // calculate factorial of n

    fact = f1.getFactorial(); // get factorial

    cout << "\nFactorial of " << num << " => " << fact;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
