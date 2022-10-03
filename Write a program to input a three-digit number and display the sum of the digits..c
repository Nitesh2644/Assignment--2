//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    
    int n,r,sum=0;
    printf("Enter the three digit number: ");
    scanf("%d",&n);
    
    r=n%10;
    sum=sum+r;
    n=n/10;
    
    r=n%10;
    sum=sum+r;
    n=n/10;
    
    r=n%10;
    sum=sum+r;
    n=n/10;
    
    printf("Sum of three digit number is %d",sum);
    return 0;


}