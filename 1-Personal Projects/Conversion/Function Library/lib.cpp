#include <iostream>
#include <cmath>
#include <string>
#include "lib.h"

using namespace std;

// getBinaryValue function
void getBinaryValue(int value) {
    cout << "Binary: ";
    int binaryValue;
    while (value > 0) {
        binaryValue = value % 2;
        cout << binaryValue << " ";
        value /= 2;
    }
    cout << endl;
}

// getHex function
void getHex(int value) {
    cout << "Hex: ";
    int temp, i = 1, remainder;
    char hex[50];
    temp = value;

    while (temp != 0) {
        remainder = temp % 16;
        if (remainder < 10) {
            hex[i++] = remainder + 48;
         }
        else {
            hex[i++] = remainder + 55;
         }
        temp = temp / 16;
    }

    for (int j = i; j > 0; j--) {
        cout << hex[j];
    }
    cout << endl;
}
