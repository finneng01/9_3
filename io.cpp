#include "io.h"

int n_einlesen(void) {
    int n;
    do {
        printf("n eingeben");
        scanf("%d", &n);
    } while (n < 0);
    return (n);
}
int x_einlesen(void) {
    int x;
    do {
        printf("x eingeben");
        scanf("%d", &x);
    } while (x < 0);
    return (x);
}