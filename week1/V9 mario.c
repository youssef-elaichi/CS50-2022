
Method super mario:

#include <stdio.h>
#include <cs50.h>


float discount(float price, int per);

int main(void){

   int count = -1;

   while(count < 1){
      count = get_int("count: ");
   }
   for(int i = 0; i < count; i++){
      printf("?");
   }
   printf("\n");
}


Method loop do  while:


#include <stdio.h>
#include <cs50.h>


float discount(float price, int per);

int main(void){
   int count;

   do{
      count = get_int("count: ");
   }while(count < 1);

   for(int i = 0; i < count; i++){
      printf("?");
   }
   printf("\n");
}


do while: loop  Method:


#include <stdio.h>
#include <cs50.h>


float discount(float price, int per);

int main(void){
   int count;

   do{
      count = get_int("count: ");
   }while(count < 1);



   for(int i = 0; i < count; i++){
      for(int l = 0; l < count; l++){
         printf("#");
      }
      printf("\n");
   }

}

#include <stdio.h>
#include <cs50.h>
void draw(int n);
int main(void){
    int maryo = get_int("number:");
    draw(maryo);
 }


 void draw(int n){
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
            printf("#");
        }
    printf("\n");
    }
   }

// $ make test3
// $ ./test3
// number:10
// ##########
// ##########
// ##########
// ##########
// ##########
// ##########
// ##########
// ##########
// ##########
// ##########



#include <stdio.h>
#include <cs50.h>
int main(void){
    int maryo = get_int("number:");
    for(int i = 0 ; i < maryo ; i++){
        for( int j = 0 ; j < maryo ; j++){
            printf("#");
        }
    printf("\n");
    }

}


// $ make test3
// $ ./test3
// number:5
// #####
// #####
// #####
// #####
// #####












