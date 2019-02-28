#include <iostream>

using namespace std;

// drinkCoffee function
void drinkCoffee(const string& coffee, int sip);

int main()
{
    string coffee = "☕️";
    int sip = 5;
    drinkCoffee(coffee, sip);
}

// drinkCoffee function
void drinkCoffee(const string& coffee, int sip) {
    if(sip >= 1) {
        cout << coffee << " take a sip" << endl;
        drinkCoffee(coffee, sip - 1);
    }
    if(sip == 0) {
        cout << "Want a refill?" << endl;
    }
}
