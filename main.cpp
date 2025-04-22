#include "main.h"

int main() {
    int x,y,n;

    n = n_einlesen();
    x = x_einlesen();
    y = x_hoch_n (x,n);

    printf("%d hoch %d = %d\n", x, n, y);
}