#include <stdio.h>
int main()
{
    int m,n,s;
    int a[2][2],b[2][2],result[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter the %d %d first matrix \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
      for (int p=0;p<2;p++)
    {
        for (int q=0;q<2;q++)
        {
            printf("enter the %d %d second matrix \n",p,q);
        scanf("%d",&b[p][q]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)

               {
               s=a[i][k]*[k][j];
               printf("%d \t",result[i][j]);

            }
            printf("\n") ;




        }
    }

    return 0;
}
