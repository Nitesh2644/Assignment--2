//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    
    temp=num;
    num=num/10;
    
    printf("Number %d is without its last digit is %d",temp,num);
    
    return 0;
}