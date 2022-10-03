//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int num,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    
    temp=num;
    num=num%10;
    
    printf("UNIT digit of %d is %d",temp,num);
    
    return 0;
}