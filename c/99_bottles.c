// 99 bottles of beer on the wall, 99 bottles of beer.
// Take one down, pass it around, 98 bottles of beer on the wall...
//
// 98 bottles of beer on the wall, 98 bottles of beer.
// Take one down, pass it around, 97 bottles of beer on the wall...
//
// 97 bottles of beer on the wall, 97 bottles of beer.
// Take one down, pass it around, 96 bottles of beer on the wall...
// ...
// 2 bottles of beer on the wall, 2 bottles of beer.
// Take one down, pass it around, 1 bottle of beer on the wall...
// 
// 1 bottle of beer on the wall, 1 bottle of beer.
// Take one down, pass it around, no more bottles of beer....
//
// No more bottles of beer on the wall, no more bottles of beer.
// We've taken them down and passed them around; now we're drunk and passed out!

#include "stdio.h"

int count = 99; //bottles count

void couplet(int count){
    if (count>1){
        printf("%i bottles of beer on the wall, %i bottles of beer.\n", count, count);
        printf("Take one down, pass it around,");
        --count;
        if (count!=1){
            printf(" %i bottles of beer on the wall...\n\n", count);
        }
        else{
            printf(" %i bottle of beer on the wall...\n\n", count);
        }
        couplet(count);
    }
    else if (count==1){
        printf("%i bottle of beer on the wall, %i bottle of beer.\n", count, count);
        printf("Take one down, pass it around, no more bottles of beer on wall....\n\n");
        --count;
        couplet(count);
    }
    else
    {
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("We've taken them down and passed them around; now we're drunk and passed out!");
    }
}

int main(void){
    couplet(count);
}