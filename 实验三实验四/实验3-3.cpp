#include <iostream>
#include "mytemperature.h"
using namespace std;

int main() {
    double cel, fah;
    cin >> cel;
    cout << celsius_to_fah(cel) << endl;
    cin >> fah;
    cout << fahrenheit_to_cels(fah) << endl;
    return 0;
}