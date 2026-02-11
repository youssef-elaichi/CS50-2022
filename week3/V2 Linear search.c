//  1:  #include <string.h>  ==>  strcmp()

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string names[] = {"ahmed","youssef","brahim","hamza","elaichi","stakatak"};
    for(int i = 0 ; i < 7 ; i++){
        if(strcmp(names[i], "youssef") == 0){  // 😲  strcmp() katjbad lik name   ila l9atha ra katkon katsawi 0  ila mal9athach katswi  
            printf("found in %i steps\n" , i + 1);
            return 0;
        }
    }
    printf("not found\n")
    return 1;
}


