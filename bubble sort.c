/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int n,a[5];
    int bub_sort(int a[5])
    {
        printf("Enter the number of elements:");
        scanf("%d",&n);
       printf("Enter the numbers:");
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    }  
    int main()
      {
          
        bub_sort(a);
         for (int i = 0; i < n; i++)
         {
        printf("%d ", a[i]);
         }
        return 0;
      }
    

    
