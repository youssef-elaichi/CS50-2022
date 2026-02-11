#include<stdio.h>
int main(void){
    int x = 2;
    switch(x){
        case 2:
        printf("x is 2'n");
        break;
        case 3:
        printf("x is 3 \n");
        break;
        default:
        printf("x is neither 2 nor 3 \n");
        break;
    }
}