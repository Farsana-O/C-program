/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int binary_search(int a[],int start,int end,int num)
{   
    
    
    while(start<=end)
    {
        //find the middle element
        int mid=start+(end-start)/2;
        if(a[mid]<num)
        {
             start=mid+1;
        }
        else
        {
           end=mid-1;
        }
        if(a[mid]==num)
        {
            return mid;
        }
        
   
}
return -1;
}


int main()
{
    
    int a[]={2,3,5,6,11,12,16,20};
    int len=sizeof(a)/sizeof(a[0]);
     int num=3;
   
   int ans= binary_search(a,0,len-1,num);
   printf("the index is %d",ans);

    return 0;
}