/**
  * @brief Conversion for Hex, Binary & Decimal
  * @author Francis
*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include "lib.h"

using namespace std;

int main()
{
    // value types
    int hex, binary, decimal;
    string valueType;
    cout << "Enter a string of the valueType you have \n"
         << "hex, binary, or decimal: ";
    cin >> valueType;
    transform(valueType.begin(), valueType.end(), valueType.begin(), ::toupper);

    // hex
    if(valueType == "HEX") {
        cout << "Enter Hex value: ";
        cin >> hex;
    }

    // binary
    if(valueType == "BINARY") {
        cout << "Enter binary value: ";
        cin >> binary;
        getDecimal(binary);
    }

    // decimal
    if(valueType == "DECIMAL") {
        cout << "Enter decimal value: ";
        cin >> decimal;
        getBinaryValue(decimal);
        getHex(decimal);
    }

}
