/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,n=5;
    // // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n"); 
        
       
    // }
    
    for(k=n;k>=1;k--)
        
        {
            for(l=1;l<=k;l++)
            {
                printf("%d",l);
            }
            printf("\n");
        }
         
    return 0;
}
