#include<stdio.h>
#include<time.h>

void run_fun(void (*funPtr)()){
    time_t start, end;
    double duration = 0;
    time(&start);
    funPtr();
    time(&end);
    printf("time consume: %f\n", difftime(end, start));
}
