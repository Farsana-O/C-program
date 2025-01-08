/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n ,l;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("enter the last number:");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
     printf("%d * %d = %d \n",i,n,i*n);
    }

    return 0;
}
