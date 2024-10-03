#include <stdio.h>

int main()
{
   int a[5],b=0,c=0,i;
   
       for(i=0;i<5;i++)
       {
           scanf("%d",&a[i]);
       }
       
       for(i=0;i<5;i++)
       {
           if (a[i]>c)//c is largest no
           {
               b=c;
               c=a[i];
           }
           else if (a[i]>b)
           {
               b=a[i];
           }
       }
   
        printf("The second largest element is %d\n", b);
           return 0;
    }



