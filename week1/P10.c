Method for int / float = float :

#include <stdio.h>
#include <cs50.h>


int main(void){
   int num1 = get_int("enter the first number: ");
   float num2 = get_float("enter the second number: ");
   printf("result is :%.2f\n",  num1 / num2);
}

Method for ; int / int = (float) :

#include <stdio.h>
#include <cs50.h>


int main(void){
   int num1 = get_int("enter the first number: ");
   int num2 = get_int("enter the second number: ");
   printf("result is :%.2f\n", (float) num1 / (float) num2);
}

Const = "Steadfast value": "قيمة تابت" 

#include <stdio.h>
#include <cs50.h>


int main(void){
   const int x = 20;
   x = 30;

   printf("%i \n",x);
}

