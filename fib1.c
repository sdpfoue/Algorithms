#include "common.h"

double fib1(int n){
    if(n == 0 || n == 1) return n;
    return fib1(n-1) + fib1(n-2);
}

int main(){
    run_rec_fun(45, fib1);
    return 0;
}
