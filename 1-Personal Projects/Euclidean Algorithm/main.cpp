// Euclidean Algorithm
#include <cmath>
#include <iostream>

using namespace std;

/**
 * @brief getGCD
 * @param a
 * @param b
 */
void getGCD(int a, int b);

/**
 * @brief computeReminder
 * @param remainderValue
 */
void computeRemainder(int largeValue, int remainderValue);

int main()
{
    int aValue, bValue;
    cout << "Enter Values with space between: ";
    cin >> aValue >> bValue;
    getGCD(aValue, bValue);
    //cout << aValue << " " << bValue;
}

// Euclidean Algorithm function

void getGCD(int a, int b){
    int remainder = 0; // gcd;
    if(a > b) {
        while (a > b) {
            a -= b;
            remainder = a;
            computeRemainder(a, remainder);
        }
    }
    else {
        b -= a;
        remainder = b;
        computeRemainder(b, remainder);
    }

    //cout << remainder;
}

// computeRemainder function
void computeRemainder (int largeValue, int remainderValue) {
    int gcf, temp = 0;
    while (lar) {
        temp = remainderValue;
        largeValue -= remainderValue;
        remainderValue = largeValue;
        largeValue = temp;
    }
    gcf = remainderValue;
    cout << remainderValue;
}

