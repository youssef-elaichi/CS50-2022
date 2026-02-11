#include <stdio.h>
#include <cs50.h>

int main(void){
    FILE *myfile = fopen("phonebook.csv","w"); // FILE howa naw3o motaghayir
    // fopen function li ta3amol ma3a milafat al5arijia
    // fopen("name of the file.txt or .csv" , "mood")
    char* name = get_string("name: ");
    char* phone = get_string("phone : ");
    fprintf(myfile ,"%s ,%s\n", name,phone); // printf = ta9omo bi tiba3ati 3ala terminal wa  fprintf(name of the file) = file printf ==> tatba3 fi file
    fclose(myfile); // katbadal lina data man ram ila hard disck
}


// $ make test5
// $ ./test5
// name: youssef elaichi
// phone : 99399489099

// ida da5alna li milaf aladi ismoho phonebook.csv  sanajida ma3lomat alati ad5alnaha : name youssefelaichi number: 38348993

// There is tree importents moods:

// mood           delete         create
// r              no             no
// w              yes            yes
// a              no             yes


//1- r
//==> read:  ila biti t9ra dak chi li fi milaf

//2- w
//==> wreat:  ila biti tktab chi haja fi milaf walakin katmhi dak chi li kan man 9bal

//3- a
//==>  append:  kadif ma3lomat okathtafad fi l9dima

