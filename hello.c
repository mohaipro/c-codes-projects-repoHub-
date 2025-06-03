#include <stdio.h> // including the standard input output header file 

int main(void){
    // greeting message for all C programming lovers :)
    int rating;
    printf("Hello and Welcome to C Lang!\n");
    printf("Rate C out of 10:");
    // Get the users input
    scanf("%d", &rating);
    printf("I also think C is a %d%s", rating, "/10!");
}
