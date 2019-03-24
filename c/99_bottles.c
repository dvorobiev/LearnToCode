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
    printf("Bottle count is %i\n", bottle_count);
    bottle_count-=1;
    if (bottle_count==0){
        printf("THE END");
    } else{
        couplet(bottle_count);
    }
}

int main(){
    printf("Right now we print %i line of digit\n", bottle_count);
    couplet(bottle_count);
}