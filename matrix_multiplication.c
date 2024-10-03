#include<stdio.h>
int main(){
    int i,j,k,s=0 ;
    int a[4][4];
    int b[4][4];
    int c[4][4];

    int p,q ;
      printf("enter array a");
      
    for(p=0;p<2;p++){
        for (q=0;q<2;q++){

           
            scanf("%d",&a[p][q]);
        }
    }
printf("print array b ");
    for(p=0;p<2;p++){
        for (q=0;q<2;q++){

           
            scanf("%d",&b[p][q]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            s=0;
            
            for(k=0;k<2;k++)
            {
                s=s+a[i][k]*(b[k][j]);
            }
            
            c[i][j]=s;
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}