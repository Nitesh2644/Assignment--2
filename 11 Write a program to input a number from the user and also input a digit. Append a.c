/******************************************************************************

Q 11 Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n,digit,new=0;
    printf("Enter the number: ");
    scanf("%d",&n);
     printf("Enter the digit: ");
    scanf("%d",&digit);
    
    new=(10*n+digit);
    
    printf("resulting value is %d",new);
    
    
    return 0;
}
