/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
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
          for(j=1;j<2*n-1;j++)
          {
              if(j>=n-(i-1) && j<=n+(i-1))
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
