//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the first number: ");
    scanf("%d",&i);
    printf("Enter the second number: ");
     scanf("%d",&j);
     
     i=i+j;
     j=i-j;
     i=i-j;
     printf("After swapping number are %d and %d",i,j);
     
     return 0;
}