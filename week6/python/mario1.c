#include<stdio.h>
int get_positive(n);
int main(void){
    int height = get_positive(gh);
    for(int i = 0; i < height; i++){
        printf("#");    
    }    

    
}

int get_positive(n)
{
    int n;
    do
    {
        n = get_int("Enter a positive integer: ");
    } while (n < 1);
    return n;
    
}