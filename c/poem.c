#include "stdio.h"
const char* couplet = "у попа была собака, он ее любил,\nона съела кусок мяса, он ее убил\nв землю закопал\nи надпись написал, что ";

void poem(){
    printf ("%s",couplet);
    poem();
}

void main(){
    poem();
}