/******************************************************************************

 Write a program to find the position of first 1 in LSB.
 
*******************************************************************************/

#include<stdio.h>
int main()
{
  int n,counter=1;
  printf("Enter the number: ");
  scanf("%d",&n);
  
  while(n)
  {
      if(n%2==1)
      {
          printf("Position of first LSB is %d",counter);
          return 0;
      }
      else
      {
      n=n/2;
      counter++;
    
     
      }
  }
    return 0;
}