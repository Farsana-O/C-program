/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int start,stop,i;
    printf("enter the start number ;");
    scanf("%d",&start);
    printf("enter the stop number ;");
    scanf("%d",&stop);
    for(i=start;i<=stop;i++)
    {
         printf("%d \n",i);
    }
    return 0;
}
