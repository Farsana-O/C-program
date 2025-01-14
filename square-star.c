/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int i,j, rows=12;
 for(i=1;i<=rows;i++)
{
    for (j=1;j<=rows;j++)
    {
        if(i==1 || j==1 || i==rows || j==rows)
        {
            printf("* ");
        }
            else{
            
                printf("  ");
            }
        
    }
    printf("\n");
} 

    return 0;
}