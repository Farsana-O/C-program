/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int AI,tax;
    printf("Enter the annual income: ");
    scanf("%d",&AI);
    if(AI<250000)
    {
        printf("no tax");
        
    }
    else if(AI>=250000 && AI<=500000)
    {
        
        tax=(AI*5)/100;
        printf("%d",tax);
    }

else if(AI>=500000 && AI<=1000000)
    {
        
        tax=(AI*20)/100;
        printf("%d",tax);
    }
    else if(AI>=1000000 && AI<=5000000)
    {
        
        tax=(AI*30)/100;
        printf("%d",tax);
    }
    else
    {
        tax=(AI*30)/100;
        printf("%d",tax);
    
    }
    return 0;
}
