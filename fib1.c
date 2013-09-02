#include "common.h"

long double fib1(int n){
    if(n == 0 || n == 1) return n;
    return fib1(n-1) + fib1(n-2);
}

int main(){
    run_fun(&fib1);
    return 0;
}
