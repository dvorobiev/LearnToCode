#include "stdio.h"
#include "stdlib.h"
int array[10]={3,5,1,7,2,7,6,0,8,4};

int reverse_comp(const void *a, const void *b){
    int* aa = (int*)a;
    int* bb = (int*)b;
    if (*aa<*bb){
        return 1;
    } else if (*aa>*bb)
    {
        return -1;
    } else
    {
        return 0;
    }
}

void multiplication(int *x){
    *x *= 2;
}

int main(){
    int x = 42;
    printf("%d\n", x);
    multiplication(&x);
    printf("%d\n", x);
    qsort(&array,10,sizeof(int),&reverse_comp);
}
