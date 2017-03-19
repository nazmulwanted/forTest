#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char command[25],temp[80]; // declaring two integer arrays
    int i,j; // two numbers for operation

    for(;;){
        printf("Operation? ");
        gets(command);// getting user commands like add, subtract , multiplication, division or quit

        if(!strcmp(command,"quit")) break; // if user types 'quit' then program stops

        printf("Enter first number: ");
        gets(temp);
        i=atoi(temp); // converts string to integer

        printf("Enter second number: ");
        gets(temp);
        j=atoi(temp); // converts string to integer

        if(!strcmp(command,"add")){
            printf("%d\n",i+j); // if user commands 'add' then does addition
        }
        else if(!strcmp(command,"subtract")){
            printf("%d\n",i-j); // if user commands 'subtract' then does subtraction
        }
        else if(!strcmp(command,"multiply")){
            printf("%d\n",i*j); // if user commands 'multiply' then does multiplication
        }
        else if(!strcmp(command,"divide")){
            printf("%d\n",i/j); // if user commands 'divide' then does division
        }
        else {
            printf("Unknown command!\n"); // if nothing matches then shows 'unknown command' message
        }
    }

    return 0;
}
