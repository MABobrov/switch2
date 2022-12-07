#include <iostream>
#include <stdio.h>
int main() {
    int day;
    printf("enter the  day of week number");
    scanf("%i",&day);

    switch(day) {
        case 1: {printf("ponedelnik");}break;
        case 2:{printf("vtornik");}break;
        case 3:{printf("sreda");}break;
        case 4:{printf("chetverg");}break;
        case 5:{printf("pyatnica");}break;
        case 6:{printf("subbota");}break;
        case 7:{printf("voskresenye");}break;
        default:{printf("ERROR");}
    }

}


