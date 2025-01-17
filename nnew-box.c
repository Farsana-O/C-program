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
     for(j=1;j<=2*i*i;j++)
     {
       
         printf("* ");
          if(j%(2*i)==0)
        {
            printf("\n");
        }
        
     }
      
        for(k=1;k<=3;k++) 
        {
            if(i==3)
            {
                break;
            }
            printf("* \n");
        }
     
    
 }

    return 0;
}