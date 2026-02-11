Method to ask for name :

#include <stdio.h>
#include <cs50.h>


int main(void){
   string anwer = get_string("what's your name?");
   printf("hello :%s\n", anwer);
}

