/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
   int array[10];
   int n;
   printf("enter your number of elements :");
   scanf("%d",&n);
   printf("enter your elements :");
   for(int i=0;i<n;i++){
       scanf("%d",&array[i]);
   }


   int i, j, num1,temp;
   for (i = 0; i < (n - 1); i++) {
      num1 = i;
      for (j = i + 1; j < n; j++) {
         if (array[num1] > array[j])
            num1 = j;
      }
      if (num1 != i) {
         temp = array[i];
         array[i] = array[num1];
         array[num1] = temp;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d ", array[i]);
   return 0;
}