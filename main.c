/**   DOCUMENTAION

    A C program implementing a STRING PROCESSOR with the following features:
    1- copy string
    2- copy first n characters of the string
    3- merge strings
    4- count number of digits in a string
    5- count number of alphabetic characters in a string      */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**Declaring global Variables to be used both in the main and User-defined functions.*/
 char String1[20], String2[20]; int n, choice;


/**Functions prototype.*/
void copyString();  void copyNcharaters (); void mergeStrings(); void countDigits();
void countAlphabets(); void Quit(); void clearScreen();


int main() {

   do {
        printf("\n Menu:\n\n");
        printf("(1) copy string\n");
        printf("(2) copy first n characters of the string\n");
        printf("(3) merge strings\n");
        printf("(4) count number of digits in a string\n");
        printf("(5) count number of alphabetic characters in a string\n");
        printf("(6) quit\n\n");
        printf("Select a choice from 1-6: ");
        scanf("%d", &choice);

switch(choice){
    case 1: copyString();       break;
    case 2: copyNcharaters ();  break;
    case 3: mergeStrings();     break;
    case 4: countDigits();      break;
    case 5: countAlphabets();   break;
    case 6: Quit();             break;
                    }//switch
        }while (choice != 6);

   return 0;
}//main

void copyString(){

    int descion;
    printf("\nEnter the first string: ");
    scanf("%s", String1);
    printf("Enter the second string: ");
    scanf("%s", String2);

    printf("\n(1) copy first string to second string location\n");
    printf("(2) copy second string to first string location\n");
    printf("\nSelect your choice from the above menu: ");
    scanf("%d", &descion);

   switch (descion){

    case 1:
        strcpy(String2,String1); break;

    case 2:
        strcpy(String1,String2); break;
   }
        printf("String 1 after copying is: ");
        puts(String1);
        printf("String 2 after copying is: ");
        puts(String2);
    clearScreen();
}

void copyNcharaters (){

    int descion;
    printf("\nEnter the first string: ");
    scanf("%s", String1);
    printf("\nEnter the second string: ");
    scanf("%s", String2);
    printf("\nEnter the number of characters you want to copy: ");
    scanf("%d", &n);
    printf("\n(1) copy first %d characters from first string to second string location\n", n);
    printf("(2) copy first %d characters from second string to first string location\n", n);
    printf("\nSelect your choice from the above menu: ");
    scanf("%d", &descion);

   switch (descion){

    case 1:
        strncpy(String2,String1,n); break;

    case 2:
        strncpy(String1,String2,n); break;
   }
        printf("String 1 after copying %d characters is: ",n);
        puts(String1);
        printf("String 2 after copying %d characters is: ",n);
        puts(String2);

    clearScreen();
}

void mergeStrings(){
    printf("\nEnter the first string: ");
    scanf("%s", String1);
    printf("\nEnter the second string: ");
    scanf("%s", String2);
    strcat(String1,String2);
    puts(String1);
    puts(String2);
    clearScreen();
}

void countDigits(){

    int i,digits =0;
    printf("\nEnter string: ");
    scanf("%s", String1);
    for (i = 0; String1[i] != '\0'; i++){
        if(isdigit(String1[i]))
            digits = digits+1;
    }
    printf("there are %d digits in the string", digits);

    clearScreen();
}

void countAlphabets(){
    int i,alpha =0;
    printf("\nEnter string: ");
    scanf("%s", String1);
    for (i = 0; String1[i] != '\0'; i++){
        if(isalpha(String1[i]))
            alpha = alpha+1;
    }
    printf("there are %d alphabets in the string", alpha);

    clearScreen();
}

void Quit(){
    system("cls");
    printf("you have Exited the program, see you next time!\n\n");
}

void clearScreen(){
printf("\npress any Key to continue: ");
    getch();
    system ("cls");
}//clear screen function
