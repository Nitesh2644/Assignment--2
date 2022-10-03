/******************************************************************************

Q 10 :Write a program to make the last digit of a number stored in a variable as zero
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    s=10*(n/10);
    
    printf("Last digit of a number stored in a variable as a zero is %d ",s);
    return 0;
}
