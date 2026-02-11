// fi had hala 9iyam bjoj tbadlo lianana dayrin copy
// lblan o ma fih howa s pointer yochir ila wal harf fi array pointer index 0 s[0]  mali chadini had l9ima day s o da5alnaha fi     t   ,   t  fhad hala walat kasawi nafs lima dyal    s      li howa ra9me hexatecimale ;   look at the photo to inderstade what's hapend

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void){

    char *s = get_string("s:");
    char *t = s;

    t[0] = toupper(t[0]);                     // had fuction kathawal li upercase
    printf("resulte of s:%s\n" , s);
    printf("resulte of t:%s\n" , t);
}

// $ make test5
// $ ./test5
// s:youssef
// resulte of s:Youssef
// resulte of t:Youssef


//malloc() : kathjaz lina makn fi dakira 3la chakl beyts o fi argument  ()kandiro 3adad bi ma3na 3ada horof 

// fi had hala ghadi t5asna fuction a5ra li smitha strlen( s + 1)  kathsab lina 3adad ahrof 

//sabab 3lach zadwa 1 liana wra kola string katkon < \0 >

// hona aradna an nohawila 9imat 's' ila 't' wa no3adil 3ala 9mat 't'  bi doni ma tataghayar 9mat 's'

#include <stdio.h>
#include <cs50.h>
#include <ctype.h> //toupper()
#include <stdlib.h>//malloc()
#include <string.h> // strlen()
int main(void){

    char *s = get_string("s:");
    char *t = malloc(strlen(s +1)); // 9omna bi hajz makan li string wa hasb al9ima alati bida5iliha
    // hana 3adna mochkila ila kanat mallco(_) kathjaz makan fi ram , ila makanch fi dakira misaha . ghadi treturn < NULL >
    
    // lihada chadi ndiro <if>
    if(t == NULL){
      return 1;
    }

    for(int i = 0 ; i < strlen(s +1) ; i++){ // for loop fhad hala 9amat bi malaa  makan li hajzato li function dayl strlen(s +1)
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("resulte for s:%s\n", s);
    printf("resulte for t:%s\n", t);
}

// $ make test5
// $ ./test5
// s:youssef
// resulte for s:youssef
// resulte for t:Yousse

// 9omna hona bi sti3mal fuction ismoha strcpy(s , t) had function darat lina 5adma li darnah fi <for loop>

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(void){

    char *s = get_string("s:");
    char *t = malloc(strlen(s +1));
    strcpy(t ,s); 
    
    t[0] = toupper(t[0]);
    printf("resulte for s:%s\n", s);
    printf("resulte for t:%s\n", t);
}

// $ make test5
// $ ./test5
// s:youssef
// resulte for s:youssef
// resulte for t:Yousse


// fhad hala zadna free had free katharar
// mali kanda5lo chi data o kanmhoha kathayad automatiquement man ram walakin mani kan5admo bi chakl yadawi bhal fi malloc kint5asna darori nharoha bi free 
//5adamna wahad l3iba smitha <valgrind ./test5> fi terminal  kat3tik ma3limat 3la mochkila dyalak mital : ila kano beyts ma mhararich kat9olha li ghir hia bi wahad ta39id 
// dak chi 3lach jach maktabat < cs50 > o3tatna   <hellp50 valgrind ./test5> bach kat3tik mochkil bla t39id:

#include <stdio.h>
#include <cs50.h>
#include <ctype.h> //toupper()
#include <stdlib.h>//malloc()
#include <string.h> // strlen()
int main(void){

    char *s = get_string("s:");
    char *t = malloc(strlen(s +1)); // 9omna bi hajz makan li string wa hasb al9ima alati bida5iliha
    // hana 3adna mochkila ila kanat mallco(_) kathjaz makan fi ram , ila makanch fi dakira misaha . ghadi treturn < NULL >
    
    // lihada chadi ndiro <if>
    if(t == NULL){
      return 1;
    }

    for(int i = 0 ; i < strlen(s +1) ; i++){ // for loop fhad hala 9amat bi malaa  makan li hajzato li function dayl strlen(s +1)
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("resulte for s:%s\n", s);
    printf("resulte for t:%s\n", t);
}
