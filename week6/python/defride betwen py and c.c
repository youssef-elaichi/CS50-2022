// defride betwen py and c:
// if we want print same things in c we tape:

#include<stdoi.h>
int main(void){
    printf("hello world");
}

in python :

print('hello world')


print("hello world")

// $ python testpy.py
// hello world

// in c:

#include <stdio.h>
#include <cs50.h>
int main(void){
    string answer = get_string("what is your name?");
    printf("hello %s \n", answer);
}
// $ make testpy
// ./test$ ./testpy
// what is your name?youssef
// hello youssef 



in python:

from cs50 import get_string
answer = get_string("what is your name")

print("hello world  " + answer + "How are you?")             //

from cs50 import get_string
answer = get_string("what is your name")

print(f"hello world  {answer} How are you?")



// $ python testpy.py
// what is your name youssef
// hello world   youssef How are you?



// in c:

#include <stdio.h>
#include <cs50.h>
int main(void){
    int x = 10;
    int y = 33;
    if(x < y){
        printf("x is less than y\n");
    }
    else{
        pritf("x is not less than y\n");
    }
}

// in python:

x = 10
y = 20
if x < y:
    print("x is less than y: ")
else:
    print("x is not less than y")



// in c:

#include <stdio.h>
#include <cs50.h>
int main(void){
    int x = 20;
    int y = 20;
    if(x < y){
        printf("x is less than y\n");
    }
    else if(x == y){
        printf(" x == y");
    }
    else{
        pritf("x is not less than y\n");
    }
}




// in python :

x = 20
y = 20
if x < y:
    print("x is less than y: ")
elif x == y:
    print("x == y")
else:
    print("x is not less than y")


// $ python testpy.py
// x == y


// in python while:

x = 0
while x < 3:
    print("go gogo")
    x += 1

$ python testpy.py
go gogo
go gogo
go gogo



// in c for loop

#include <stdio.h>
#include <cs50.h>
int main(void){
    for(int i = 0 ; i < 3 ; i++){
        printf("meow\n");
    }
}


// in python:

for i in [0,1,2]:  // smitha list  hadi mamsalkach ila bghina da5lo 1000 t9m nb9aw tal ghada
    print("meow")


for i in range(5):   // had range dayra bhal list [0,1,2,3,4]
    print("meow")


// in this case range(2 = no9tato bidaya, 6 = no9tato nihaa)


for i in range(2,6):
    print("meow")

