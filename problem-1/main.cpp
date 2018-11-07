#include <iostream>
#include "main.h"

using namespace std;

int findMax(int x, int y, int z) {
    int max;

    if(x >= y && x >= z) {
        max = x;
    } else if (y >= x && y >= z) {
        max = y;
    } else if(z >= x && z >= x) {
        max = z;
    }

    return max;
}