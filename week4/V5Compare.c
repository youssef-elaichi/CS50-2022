// fi had hala 9arana mabin joj dayl a3dad ila kan0 bhal bhal ra kitba3 lina same wo 3aks :

#include <stdio.h>
#include <cs50.h>



int main(void){

    int i = get_int("i: ");
    int j = get_int("j: ");
    if( i == j){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}
// $ make test5
// $ ./test5
// i: 10
// j: 10
// Same






// fi had had hala la    hitach:  mani 5dina man 3and cha5s i = li katchir 3ala awal pointer f arry . kit5aba fi dakira bi chakl 3achwai    j = "" nafs chay   lihada kikon 3andhoma ra9m hexatecimale m5talaf 

#include <stdio.h>
#include <cs50.h>


int main(void){

    char* i = get_string("i: ");
    char* j = get_string("j: ");
    if( i == j){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}

$ make test5
$ ./test5
i: youssef 
j: youssef
Different




// dak chi 3lach 5damna bwahad tari9a hia anana 5adam function kat9aran mabinathom , fi halat kano kitchabho ra function return 0  ila makanoch return 1  :  name of the function  strcmp(i , j) == 0;

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    char* i = get_string("i: ");
    char* j = get_string("j: ");
    if( strcmp(i , j ) == 0){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}

$ make test5
$ ./test5
i: youssef
j: youssef
Same



// t9dar rih lik fi balak had fikra ank tchad  j    o dir liha (*j  =   kat3ni anak katjib 9ima li kayana da5il pointere j)  fhad hala rak kat9aran ghir har lawal

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    char* i = get_string("i: ");
    char* j = get_string("j: ");
    if(*i == *j){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}

: youssef
j: yousef
Same
