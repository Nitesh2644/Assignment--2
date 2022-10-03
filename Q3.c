//Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the two number: ");
    scanf("%d%d",&n,&i);
    printf("Before swapping number is %d and %d\n",n,i);
    temp=n;
    n=i;
    i=temp;
    printf(" After swaping number is  %d and %d",n,i);
    return 0;
}