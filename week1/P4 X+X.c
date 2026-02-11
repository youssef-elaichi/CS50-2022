Method for int   x  +  x = .. :

#include <stdio.h>
#include <cs50.h>

int main(void){
   int num1 = get_int("num1: ");
   int num2 = get_int("num2: ");
   int result = num1 + num2;
   printf ("the result is :%i \n" , result);
}

Method for int abbreviotion :

#include <stdio.h>
#include <cs50.h>

int main(void){
   int num3 = get_int("num3: ");
   int num4 = get_int("num4: ");
   printf ("the result is :%i \n" , num3 + num4);
}

Method for long abbreviotion :

#include <stdio.h>
#include <cs50.h>

int main(void){
   long num1 = get_long("num1: ");
   long num2 = get_long("num2: ");
   printf ("the result is :%li \n" , num1 + num2 );
}


