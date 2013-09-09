#include "common.h"

void extended_euclid(int a, int b, int *x, int *y, int *d){
    if(b == 0){
        *x = 1;
        *y = 0;
        *d = a;
        return;
    }

    int x1, y1, d1;
    extended_euclid(b, a % b, &x1, &y1, &d1);
    *x = y1;
    *y = x1-floor(a/b)*y1;
    *d = d1;
}


int main(int argc, char *argv[]){
    int x, y, d;
    extended_euclid(atoi(argv[1]),atoi(argv[2]), &x, &y, &d);

    printf("x: %d, y: %d, d: %d\n", x, y, d);
    
    return 0;
}
