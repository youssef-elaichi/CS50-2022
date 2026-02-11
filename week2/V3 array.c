#include <stdio.h>
#include <cs50.h>
int main(void){
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average %f\n" ,(score1 + score2 + score3)/3.0);
}



#include <stdio.h>
#include <cs50.h>
int main(void){
    int scores[3] = {72,73,33};
    printf("Average %f\n" ,(scores[0] + scores[1] + scores[2] )/3.0);
}


#include <stdio.h>
#include <cs50.h>
int main(void){
    int scores[3];Lesson
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average %f\n" ,(scores[0] + scores[1] + scores[2] )/3.0);
}

#include <stdio.h>
#include <cs50.h>
int main(void){
    int loop = get_int("how many times you want to repite this: ");   5
    int scores[loop];
    int result = 0;  =>          20
    for(int i = 0 ; i < loop ; i++){
        scores[i] = get_int("number: ");  5 
        result += scores[i];                    =>     0 + 5    5 + 6   11 + 4  15 + 3 18 + 2 = 20
    }
    printf("Average %f\n" , result/(float)loop);
}


#include <stdio.h>
#include <cs50.h>

int main(void){
    string s = get_string("text: ");
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    printf("%i\n",i);
}


#include <stdio.h>
#include <cs50.h>
int main(void){
    int lenght = get_int("how many score:");      5
    int scores[lenght];
    int result = 0;
   for(int i = 0 ; i < lenght ; i++){
     scores[i] = get_int("give you number:");
     result += scores[i];
   }
    printf("resulte is :%f\n" , result/ (float) lenght);
}

