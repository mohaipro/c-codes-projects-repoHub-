#include <stdio.h> // including the standard input output header file 
#include <string.h> // including string variables and operations on strings
int main(void){
    // greeting message for all C programming lovers :)
    // Asking devs how much they like C  ;)
    int rating;
    char str[12];
    printf("Hello and Welcome to C Lang!\n");
    printf("Rate C from 1-10:");
    scanf("%d", &rating); // Get input
    sprintf(str, "%d", rating); // I don't know. Thanks Stackoverflow
    printf("I also think C is a %d", rating);
}
