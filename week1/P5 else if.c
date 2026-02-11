Method for if else else :

#include <stdio.h>
#include <cs50.h>

int main(void){
   int x = get_int("x: ");
   int y = get_int("y: ");
   if(x > y){
      printf("x is less than y\n");
   }
   else if(x < y){
      printf("x is not less than y\n");
   }
   else{
      printf("x = y\n");
   }
}

even = paire et odd = impaire Method:

#include <stdio.h>
#include <cs50.h>
int main(void){
   int n = get_int("Entrer le nombre: ");
   if( n % 2 == 0){
      printf("le nombre est pair\n");
   }
   else{
      printf("le nombre est impair\n");
   }
}

Yes or No Method:

#include <stdio.h>
#include <cs50.h>
int main(void){
   char c = get_char("Entrer la reponce: ");
   if(c == 'y'){
      printf("add\n");
   }
   else if(c == 'n'){
      printf("note add\n");
   }
}


Y and y || N and n

#include <stdio.h>
#include <cs50.h>
int main(void){
   char c = get_char("Entrer la reponce: ");
   if(c == 'y' || c == 'Y'){
      printf("add\n");
   }
   else if(c == 'n'|| c == 'N'){
      printf("note add\n");
   }
}

