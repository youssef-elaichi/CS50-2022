#include <stdio.h>
#include <cs50.h>

int main(void){
   char c1 = 'H';
   char c2 = 'I';
   char c3 = '!';
   printf("%c %c %c\n",c1, c2 ,c3);
}
$ H I !

#include <stdio.h>
#include <cs50.h>

int main(void){
   char c1 = 'H';
   char c2 = 'I';
   char c3 = '!';
   printf("%i %i %i\n",c1, c2 ,c3);    
}
$73 72 33


#include <stdio.h>
#include <cs50.h>

int main(void){
   int c1 = 72;
   int c2 = 73;
   int c3 = 33;
   printf("%c %c %c\n",c1, c2 ,c3);
}

$ H I !

#include <stdio.h>
#include <cs50.h>

int main(void){
   string s = "HI!";
   printf("%c %c %c\n",s[0], s[1] ,s[2]);
}

$ H I !

#include <stdio.h>
#include <cs50.h>

int main(void){
   string s = "HI!";
   printf("%i %i %i\n",s[0], s[1] ,s[2]);
}

$73 72 33

#include <stdio.h>
#include <cs50.h>

int main(void){
   string s = get_string("text:");
   int i = 0;
   while(s[i] != '\0'){
    i++;
   }
   printf("resulte is :%i\n" , i);
}

$ make test1
$ ./test1
text:youssef
resulte is :7


#include <stdio.h>
#include <cs50.h>
int discont(string name);
int main(void){
   string name = get_string("text:");
    int length = discont(name);
   printf("resulte is :%i\n",length);
}

int discont(string name){
    int i = 0;
    while(name[i] != '\0'){
    i++;
   }
   return i;
}
$ make test1
$ ./test1
text:youssef
resulte is :7



#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
    string s = get_string("text");
    int length = strlen(s);
    printf("resulte:%i\n" ,length);
}

$ make test1
$ ./test1
textyousef eliachi
resulte:14
