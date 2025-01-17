/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i,j,k;
 for(i=1;i<=3;i++)
 {
    
     for(j=1;j<=1;j++)
     {
       
         
         
          
       
        printf("* ");
     }
      printf("\n");
        for(k=1;k<=3*i;k++) 
        {
             printf("* ");
            if(k%3==0)
            {
                printf(" \n");
            }
          
        }
     
    
 }

    return 0;
}
