// awal haja 3anasir dyal linked list kathfad fi ram bi chakl 3achwai machi bhal array
// dak chi 3lach 5asna ndiro lihom rabt mabinathom min 5ilal pointer:
//1: kandiro no9tat bidaya bachawar 3ala 3onwan awal 3osor fi linked list bi had no9tat bidaya kan3arfo bali bdat linked list
//2: kola 3onsor yahtawi 3ala data and pointer yochir ila 3onsor tali hata yasila ila 3onsor a5ir 3indaha pointer = NULL <look at the photo v3 to inderstende> 
// 3: 3arifna 3ala ana hdihi 3anasir tahtawi 3ala chi9ayn DATA and POINTER ==> hadihi kotla tosama <  node  >
// 4: had node kansiboha bi struct li kana 5damna biha fi phonebook:
struct nade{
  int data = 10;
}
// EX1: hnaya darna no9tat bidaya saminaha list  had list makchir 3la NULL lianan ma3adna hata DATA:
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node* next;
}node;
int main(void){
    node *list = NULL;
    
}


// Next move: 

#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node* next;
}node;
int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node)); //3lach darna pointer hatach 3adna malloc:
    if(n == NULL){
        return 1;
    }
    *(n).number = 1; // n->number = 1; bhalha bhal *(n).number = 1;
    *(n).next = NULL; // hitach ba9i madarnach motaghayir jdid next fi blast matchir 3la data ra ghadi tkon NULL:
    list = n; // hnaya 5alina no9tat bidaya tchir n ==> DATA dyal pointer next:

}

// linked list:

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
typedef struct node{
    int number;
    struct node* next;
}node;
int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node)); //3lach darna pointer hatach 3adna malloc:
    if(n == NULL){
        return 1;
    }
    n->number = 1; // n->number = 1; bhalha bhal *(n).number = 1;
    n->next = NULL; // hitach ba9i madarnach motaghayir jdid next fi blast matchir 3la data ra ghadi tkon NULL:
    list = n; // hnaya 5alina no9tat bidaya tchir n ==> DATA dyal pointer next:
    n = malloc(sizeof(node));
    if(n == NULL){
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if(n == NULL){
        free (list->next);
        free (list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;
    n = malloc(sizeof(node));
    for(node *tmp = list ;tmp != NULL ;tmp = tmp->next){
        printf("%i\n", tmp->number);
    }
    while(list != NULL){
        node* tmp = list->next;
        free(list);
        list = tmp;}

}

// $ make list
// $ ./list
// 1
// 2
// 3




// 9omna bi son3 linked list tatakawano min 1 2 3 
// ba3da dalik tarahna nafsa soal alati 9omna bi sti5damihi fi array bi idafat 3osor jadid fi array alati kant big O notion is N
// hona fi linked list 9omna bi idafat 3osor jadid fi albidaya wa kana 3onsor 3ibara 3an node tatakawano min DATA= 0  and  Pointer = Next
// wa asbahat natija fi a5ir hia 0 1 2 3:
// wa kanat big O Notion is n Log

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
typedef struct node{
    int number;
    struct node* next;
}node;
int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node)); //3lach darna pointer hatach 3adna malloc:
    if(n == NULL){
        return 1;
    }
    n->number = 1; // n->number = 1; bhalha bhal *(n).number = 1;
    n->next = NULL; // hitach ba9i madarnach motaghayir jdid next fi blast matchir 3la data ra ghadi tkon NULL:
    list = n; // hnaya 5alina no9tat bidaya tchir n ==> DATA dyal pointer next:
    n = malloc(sizeof(node));
    if(n == NULL){
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if(n == NULL){
        free (list->next);
        free (list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;
    n = malloc(sizeof(node));
    if(n != NULL){
        n->number = 0;
        n->next = NULL;
        n->next = list;
        list = n;
    }
    for(node *tmp = list ;tmp != NULL ;tmp = tmp->next){
        printf("%i\n", tmp->number);
    }
    while(list != NULL){
        node* tmp = list->next;
        free(list);
        list = tmp;}

}

// $ make list
// $ ./list
// 0
// 1
// 2
// 3




