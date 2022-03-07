#include <stdio.h>
int main()
{
    int arr[]={1,2,0,3,4,5,0,6,0,6,0,5,4,3,8,0};
    int *ptr;
    ptr=arr;
    int i,count=0;
    int n=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++) 
   {
       if(*(ptr+i)>0)
       {
       ptr[count++]=*(ptr+i);
       }
       
   }
       while(count<n)
       {
       ptr[count++]=0;
   }
   for(i=0;i<n;i++) 
   {
       printf(" %d",*(ptr+i));
   }
    return 0;
}
