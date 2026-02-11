While loop //  0 1 2 3 4

#include <stdio.h>
#include <cs50.h>
int main(void){
   int n = 0;
   while(n <= 4){
      printf("youssef\n");
      n++;
   }
}

For loop // 0 1 2 3 4 5 6 7 8 9 10

#include <cs50.h>
#include <stdio.h>
int main(void){
   for(int i = 0 ; i <= 10 ; i++){
      printf("marhba bikom\n");
   }
}

For loop // 0  2  4  6  8  10

#include <cs50.h>
#include <stdio.h>
int main(void){
   for(int i = 0 ; i <= 10 ; i+=2){
      printf("%i\n", i);
   }
}
