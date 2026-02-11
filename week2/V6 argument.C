1:
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[]){
    printf("%i\n", argc);
}

// $ make test1
// $ ./test1 youssef ahmed
// 3                             // 😲     hana sifatna data li string argv[test1 ,  youssef , ahmed]


// 2:

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    printf("%s\n", argv[0] );
}


// $ make test1
// $ ./test1 
// ./test1

// 3:

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argc == 2){
        printf("%s\n",argv[1]);
    }
    else{
        printf("hello world\n");
    }
}


// $ ./test1
// hemake test1/test1
// $ ./test1 
// hello world

// 4:

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argc == 2){
        printf("hello youssef zin kifah %s\n",argv[1]);
    }
    else{
        printf("hello world\n");
    }
}

// $ make test1
// $ ./test1 youssef
// hello youssef zin kifah youssef


// 5:

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argc != 2){
        printf("missing command line argument\n");
        return 1;                  😲                                ==>                            fi had hala  tha9a9 had chart dak chi 3lach makamlch hatal retun 0;   hbas 3and return 1;
    }
    printf("hello%s\n",argv[1]);
    return 0;                   😲
}


// $ make test1
// $ ./test1
// missing command line argument


// 6:

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argc != 2){
        printf("missing command line argument\n");
        return 1;                          😲                           ==>                  fi had lhala ta ra matha9a9ch had chart dak chi 3lach kamat hatl return 0 ; 
    }
    printf("hello: %s\n",argv[1]);
    return 0;
}

// $ make test1
// $ ./test1 youssef
// hello: youssef

