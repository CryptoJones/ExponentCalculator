#include <iostream>
#include "Utility.h"

int numberToExponent(int base, int power){

    int result = base;

    for (int i = 0; i < power -1; i++){
        result = result * base;
    }

    return result;
}