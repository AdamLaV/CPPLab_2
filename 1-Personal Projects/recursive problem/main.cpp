#include <iostream>

using namespace std;

// Return the factorial for a specified index
int factorial(int);

int main()
{
    // prompt the user to enter an integer
    cout << "Enter a non-negative integer: ";
    int n;
    cin >> n;

    // Display factorial
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}

// Return the factorial for a specifies index
int factorial(int n) {
    if(n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}
