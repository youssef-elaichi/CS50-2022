#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
    string s = get_string("Before");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
        printf("%c", s[i] - 32);
    }
    else{
        printf("%c", s[i]);
    }
    }
    printf("\n");
}

$ make test1
$ ./test1
Beforeyoussef
After:YOUSSEF

2:<string.h>

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("Before");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){
    if(s[i] >= 'A' && s[i] <= 'Z'){
        printf("%c", s[i] + 32);
    }
    else{
        printf("%c", s[i]);
    }
    }
    printf("\n");
}


$ make test1
$ ./test1
Before YOUSSEF HA9AD
After: youssef ha9ad



3: <ctype.h> and <string.h>

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void){
    string s = get_string("Before: ");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){
    if(islower(s[i]) == 0 ){
        printf("%c", s[i] + 32);
    }
    else{
        printf("%c", s[i]);
    }
    }
    printf("\n");
}

$ ./test1
Before: YOUSSEF
After:youssef

4:

#include <string.h> ==>  strlen(s) 
#include <ctype.h> ==>  islower(s[i])) 



#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void){
    string s = get_string("Before: ");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){               😲               strlen(s)         :             kathsab lik  arrye li fi  string           li howa char  ==>  H = 73
    if(islower(s[i]) != 0 ){                                😲                 islower(s[i]))   :  kathayad 3lik 5adma dya 'a'  ==> 'z'  and 'A'  ==> 'Z'  :  ila s[i] == 0 idan ra A  ila s[i] != 0 idan ra a 
    printf("%c", s[i] - 32);
    }
    else{
        printf("%c", s[i]);
    }
    }
    printf("\n");
}
$ 
$ ./test1
Before: youssef
After:YOUSSEF

5: <ctype.h>:  toupper(s[i])     yousssef => YOUSSEF


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void){
    string s = get_string("Before: ");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){                  😲               
    if(islower(s[i]) != 0 ){                                       😲               
        printf("%c", toupper(s[i]));                       😲    :                toupper(s[i])  :  kathayad 3lik hadi ==>  printf("%c", s[i] - 32);  ==>  s[i] - 32
    }
    else{
        printf("%c", s[i]);
    }
    }
    printf("\n");
}


$ make test1
$ ./test1
Before: youssef elaichi
After:YOUSSEF ELAICHI



6:  hayadna else:

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void){
    string s = get_string("Before: ");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){

        printf("%c", toupper(s[i]));
    }

    printf("\n");

 }
 
 
$ make test1
$ ./test1
Before: youssef elaichi
After:YOUSSEF ELAICHI


7:  #include <ctype.h>  ==> badalna toupper(s[i])  ==>  badalna tolewer(s[i])  

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void){
    string s = get_string("Before: ");
    printf("After:");

    for(int i = 0 ; i < strlen(s) ; i++){

        printf("%c", tolewer(s[i]));       😲                     tolower(s[i])  :  kathayad 3lik hadi ==>  printf("%c", s[i] + 32);  ==>  s[i] + 32
    }

    printf("\n");

 }
 
 
 $ ./test1
Before: YOUSSEF
After:youssef
