#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string names[] = {"ahmed","david"};
    string numbers[] = {"06010230","06329030"};    //  😲  3lach kna doro string fi namra dyal tele hitach namra latotrah wala tozad wla to9sam + - / *
    for( int i = 0 ; i < 2 ; i++){
        if(strcmp( names[i], "david" ) == 0){
            printf("your number is %s:\n", numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}


//
// $ make test1
// $ ./test1
// your number is 329030:


#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct { //  😲 struct hia li katmaknak tjma3 naw3 bayanat mitl int string..     😲  typedef hia bach kadir smia ltaht o katkon sghira bhal      ==>  pb 
  string name;
  string number;

}pb;   // 😲   pb hiya smia dyal function

  int main(void){
    pb people[2];

      people[0].name = "youssef";
      people[0].number = "062243168";


      people[1].name = "david";
      people[1].number = "064261483";


    for(int i = 0 ; i < 2 ; i++){
        if(strcmp(people[i].name ,"david") == 0){
            printf("we find it : %s\n",people[i].number);
            return 0;
        }
    }
    printf("not finde\n");
    return 1;
  }


//
// $ make test1
// $ ./test1
// we find it : 064261483
