#include "stdio.h"
#include "stdlib.h"

void multiplication(int *x){
    *x = *x*2;
}

int main(){
    int x = 42;
    printf("%d\n", x);
    multiplication(&x);
    printf("%d\n", x);
}
