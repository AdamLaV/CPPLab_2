#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include "lib.h"

using namespace std;

// getBinaryValue function
int getBinaryValue(int &value) {
    int binaryValue;
    while (value > 0)
    {
        binaryValue = value % 2;
        cout << binaryValue;
        value /= 2;

    }
}
