Swap:
// the proble is :  manli kanmbgho nabadlo mabin joj dayl motaghayirat   <  x = 10  y = 15  >
// the renge clut :  kigole lik ndiro  <  x = y  and   y  =  x   >  ==   <  x  =  15  and    y  =  15 >
// dak chi 3lach 3tina mital bach nfahmo had 9adia matalna <x>bi cas o <y> bi kas o jabna kas jdid chadina kas dyal <x> o kabinah fi kas talat o chadina kas dayl <y> o kabinah fi kas dyal <x> o fla5ar kabina kas talat li fih <x> o kabinah fi kas tani

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int x = 1;
    int y = 2;
    int tmp = x;//1
    x = y;// x == 2
    y = tmp;// y == 1
    printf("x: %i\n", x);
    printf("y: %i\n", y);
}

$ make test5
$ ./test5
x: 2
y: 1

// fi hadihi hala 9omna bi inchaa function ismoha <swap> li kay ta9oma bi 9oyam bi 3amaliat tabdile m3lomat walakin wajahatna mochkila :
//Explane the probleme: 

#include <stdio.h>

void modify(int x) {
    x = 20; // التعديل على النسخة، ليس المتغير الأصلي
}

int main() {
    int num = 10;
    modify(num); // تمرير num "بقيمته" (10)
    printf("%d", num); // الناتج: 10 (لم يتغير)
    return 0;
}

// katb9a natija hia hia hitach darna ghir < Pass by Value (التمرير بالقيمة)>

Ex:
 
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int s ;// hada fa9at mitale! <== 3ibara 3an m3lomat globals lianaha 5arij function:  tojado fi ram 3ala chakl globales

void swap(int a, int b);
int main(void){
    int x = 1;
    int y = 2;   // <== kol hadihi ma3lomat localle lianaha tojado da5il function: tojado fi ram 3ala chakl locale
    swap(x , y);
    printf("x: %i\n", x);
    printf("y: %i\n", y);
}

void swap(int a, int b){  
// limada fucntion return <void> : lianaha fa9at ta9om bi 3amalia tabdil < swap > la ghayr
    int tmp = a;
    a = b;
    b = tmp;
}

// $ make test5
// $ ./tes5
// bash: ./tes5: No such file or directory
// $ ./test5
// x: 1
// y: 2


Pass by Reference (التمرير بالمرجع):

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);

int main(void){
    int x = 1;
    int y = 2;
    swap(&x , &y);  // <==  9omna bi tamrir makanahom fi dakira
    printf("x: %i\n", x);
    printf("y: %i\n", y);
}

void swap(int *a, int *b){  // 9omna bi tamrir makan fi dakira
    int tmp = *a; // *a a5adna 9ima alati tatawajado fi makan
    *a = *b;
    *b = tmp;
}


$ make test5
$ ./test5
x: 2
y: 1
