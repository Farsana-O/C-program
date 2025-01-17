/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n; 
   printf("Enter the number of rows;");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      {
          for(j=n;j<=2*n-1;j++)
          {
              if(j>=n-(i+2) && j<=n+(i+2))
              {
                  printf("*");
              }
                  else
                  { 
                      printf(" ");
                  }
              
          }
          printf("\n");
      }
   
   
   
   
    return 0;
}