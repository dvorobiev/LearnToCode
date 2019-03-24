#include "stdio.h"

// 99 bottles of beer on the wall, 99 bottles of beer.
// Take one down, pass it around, 98 bottles of beer on the wall...
// 98 bottles of beer on the wall, 98 bottles of beer.
// Take one down, pass it around, 97 bottles of beer on the wall...
// 97 bottles of beer on the wall, 97 bottles of beer.
// Take one down, pass it around, 96 bottles of beer on the wall...
// ...
// No more bottles of beer on the wall, no more bottles of beer.
// We've taken them down and passed them around; now we're drunk and passed out!
int bottle_count = 99;

void couplet(int bottle_count){
    printf("%i bottles of beer on the wall, %i bottles of beer.\n", bottle_count, bottle_count);
    printf("Take one down, pass it around,");
    --bottle_count;
    if (bottle_count>0){
        printf(" %i bottles of beer on the wall...\n\n", bottle_count);
    }
    else{
        printf(" no more bottles of beer on the wall...\n\n");
    }
    if (bottle_count==0){
        printf("No more bottles of beer on the wall, no more bottles of beer.\nWe've taken them down and passed them around; now we're drunk and passed out!");
    } else{
        couplet(bottle_count);
    }
}

int main(){
    printf("===Right now we print POEM of \"99 bottles of beer on the wall\"===\n\n");
    couplet(bottle_count);
}