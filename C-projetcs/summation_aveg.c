#include <stdio.h>
// program to calculate the sum and average of numbers
int main()
{
    // declare and initialize some variables 
    int i, x, n,sum = 0;
    printf("enter number of iterations:");
    scanf("%d",&x);
    // loop x times until condition is false
    for (i = 0; i < x; i++){
        // receive or get number from user 
        printf("enter number:");
        scanf("%d",&n);
        // add numbers to sum (1+2+3+...)
        sum += n;
    }
    // print the summation and average of all numbers entered!
    printf("summation of numbers => [%d]\n",sum);
    printf("average of numbers => [%.2f]\n",(float)sum/(float)i);
}
