#include <stdio.h>
#include <cs50.h>
void draw(int n);
int main(void){
    int maryo = get_int("number:");
    draw(maryo);
 }


 void draw(int n){
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < i + 1 ; j++){
            printf("#");
        }
    printf("\n");
    }
   }

// $ make test3
// $ ./test3
// number:5
// #
// ##
// ###
// ####
// #####




#include <stdio.h>
#include <cs50.h>
void draw(int n);




int main(void){
    int height = get_int ("height: ");
    draw(height);
}
void draw(int n){
    if(n <= 0){
        return ;
    }
    for(int i = 0 ; i < n ; i++){
        printf("#");
    }
    printf("\n");
    draw(n-1);
}


// $ make test3
// $ ./test3
// height: 9
// #########
// ########
// #######
// ######
// #####
// ####
// ###
// ##
// #


#include <stdio.h>
#include <cs50.h>
void draw(int n);




int main(void){
    int height = get_int ("height: ");
    draw(height);
}
void draw(int n){
    if(n <= 0){
        return ;
    }
    draw(n-1);
    for(int i = 0 ; i < n ; i++){
        printf("#");
    }
    printf("\n");

}


// $ make test3
// $ ./test3
// height: 10
// #
// ##
// ###
// ####
// #####
// ######
// #######
// ########
// #########
// ##########
