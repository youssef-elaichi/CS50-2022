#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    // 1- git string from user
    char* str;
    printf("Enter a string: ");
    scanf("%s", &str);
    // 2- convert string to uppercase
    printf("Uppercase string: ");
    for(int i = 0 ; i < strlen(str) ; i++){
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}