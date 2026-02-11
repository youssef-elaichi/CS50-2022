Method:

#include <stdio.h>
#include <cs50.h>

int main(void){
   float num1 = get_float("entrer un nombre");
   float resolte = discount(num1);
   printf("resolte is :%.2f\n",resolte)
}
// %.2 f =  It means "only two numbers after the decimal point."

Method for 100 - .85 :

#include <stdio.h>
#include <cs50.h>

int main(void){
  float regular = get_float("regular price: ");
  float sale = regular * .85;
  printf(" sale price = %.2f\n", sale);
}

Method:

#include <stdio.h>
#include <cs50.h>


float discount(float price ,int per);

int main(void){
   float regular = get_float("regular price: ");
   int  percent = get_int("give the percent :");
   float sale = discount(regular,percent);
   printf("resolte is :%.2f\n",sale);
}

//  return 100 * (100 - 15)/100 = .85 ;

float discount(float price , int per){
   return price * (100 - per)/100;
}


#include <stdio.h>
#include <cs50.h>

float discount(float price , int persant);

int main(void){

  float regular = get_float("regular price: ");
  int percent = get_int("give the persent:");
  float sale = discount(regular , percent);
  printf(" sale price = %.2f\n", sale);
}

float discount(float price , int persant){include <cs50.h>
  return price * (100 - persant)/100;
}


