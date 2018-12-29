/**
  * @brief Conversion of Hex, Binary & Decimal
  * @author Francis
*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // value types
    int hex, binary, decimal;
    string valueType;
    cout << "Enter a string value type \n"
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
    }

    // decimal
    if(valueType == "DECIMAL") {
        cout << "Enter decimal value: ";
        cin >> decimal;
    }

}
