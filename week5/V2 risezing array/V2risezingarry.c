// risezing: 

#include<stdoi.h>
int main(){
    // we have a probleme in the arry :
    // ila bghina nzido motaghayir raba3 fi ram man9droch ila ida darna arry jdida fi 4 index
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    int tmp[4]; // hadi hia arry jdida
    for(int i = 0; i < 3; i++){ // i flawal ghadi tkon 0
        tmp[i] = list[i];
    }
    tmp[4] = 4;
    for(int i = 0 ; i < 4 ; i++){
        printf("%i\n", tmp[i]);
    }
}
// $ make array
// $ ./array
// 1
// 2
// 3
// 4


#include<stdio.h>
#include<stdlib.h>

int main(){
    // we have a probleme in the arry :
    // ila bghina nzido motaghayir raba3 fi ram man9droch ila ida darna arry jdida fi 4 index
    int *list = malloc(3*sizeof(int)); // 9omna bi hajz 4 amakin bi malloc bi chakl yadawi
    // sizeof(int) ==> t9omo bi i3taik 3adad betys li amotaghayir motaghair
    if(list == NULL){
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;

    int *tmp = malloc(4*sizeof(int));
    if(tmp == NULL){
        free(list); // ida lam yajid makan li wad3 ma3lomat saya9omo bi tahririha.
        return 1; // ida lam yajid makan lil ma3lomat saya5rojo mina barnamaj
    }

    for(int i = 0 ; i < 3; i++){
        tmp[i] = list[i];

    }

    free(list); // hona la9ad 9omto bi na9l ma3lomat min list ila tmp lihada ana la ahtjo list .
    tmp[3] = 4;
    list = tmp;
    for(int i = 0 ; i < 4 ; i++){
        printf("%i\n", list[i]);
    }
    free(list);
}

// $ make array
// $ ./array
// 1
// 2
// 3
// 4

// han fhad video 3rafna bali ila bghina ndifo chi 3onsor jdid fi array ==> kit5asna ndiro array jdida o n9lo liha 3anasir li kanat fi array l9dima li array jadida
// had chi li dart big O notion dayalo howa ==> N
// ila kan 3andi 10 dyal 3anasir fara ghidi nmchi 10 5otowat o ila kan 3adi 1000 5otwa ghidi nmchi 1000 5otwa

// hada laysa jayidan

// 3adna wahad haja smitha < realloc > had function katchad lik indexs li kaynin fi array l9dima o kathato lik fjdida o kadir free automatique array l9dima:
// EX:
int *list = malloc(3*sizeof(int) );

int *tmp = realloc(list, 4* sizeof(int) );

#include<stdio.h>
#include<stdlib.h>

int main(){
    // we have a probleme in the arry :
    // ila bghina nzido motaghayir raba3 fi ram man9droch ila ida darna arry jdida fi 4 index
    int *list = malloc(3*sizeof(int)); // 9omna bi hajz 4 amakin bi malloc bi chakl yadawi
    // sizeof(int) ==> t9omo bi i3taik 3adad betys li amotaghayir motaghair
    if(list == NULL){
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;

    int *tmp = realloc(list,4*sizeof(int));
    if(tmp == NULL){
        free(list); // ida lam yajid makan li wad3 ma3lomat saya9omo bi tahririha.
        return 1; // ida lam yajid makan lil ma3lomat saya5rojo mina barnamaj
    }

    tmp[3] = 4;
    list = tmp;
    for(int i = 0 ; i < 4 ; i++){
        printf("%i\n", list[i]);
    }
    free(list);
}

// $ make array
// $ ./array
// 1
// 2
// 3
// 4
