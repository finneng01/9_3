#include "calc.h"


int x_hoch_n(int x, int n) {
    if (n==0) {
        return 1;

    } else {
        return (x_hoch_n(x, n-1) * x);
    }
}