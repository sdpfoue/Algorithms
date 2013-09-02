#include "common.h"


void fib2(){
    int n = 40;
    long double f[n];
    f[0] = 0;
    f[1] = 1;
    unsigned i;
    for(i = 2; i <=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    printf("%Lf\n", f[n]);
}

int main(){
    run_fun(&fib2);
    return 0;
}
