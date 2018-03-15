#include <iostream>
#include <sstream>
#include "Utility.h"

int main() {

    using namespace std;
    
    int base = 0, exponent = 0;
    string baseEntered, exponentEntered;


    cout << "Please enter a number: ";
    getline(cin, baseEntered);
    cout << "Please enter an exponent value: ";
    getline(cin, exponentEntered);

    stringstream baseResult(baseEntered);
    stringstream exponentResult(exponentEntered);
    
    baseResult >> base;
    exponentResult >> exponent;
 
    cout << "The result is: " << numberToExponent(base, exponent) << endl;

    return 0;
}