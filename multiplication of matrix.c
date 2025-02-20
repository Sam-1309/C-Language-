#include <stdio.h>
main()
{
    int m,n,sum=0,i,j,k;
    int a[3][4],b[4][2],result[3][2];
    printf("enter 1st matrix num\n");
    for(int i=0;i<=3;i++);
    {
         for(int j=0;j<=4;j++);
         {
             printf("enter %d%d element of first matrix\n",i,j);
             scanf("%d,%d",&a[i][j]);
         }

    }
    printf("enter 2nd matrix");
    for (int i=0;i<=4;i++);
    {
       for (int j=0;j<=2;j++);
       {
             printf("enter %d%d element of first matrix\n",i,j);
             scanf("%d%d",&b[i][j]);
       }
    }
    for(i=0;i<=3;i++);
    {
        for(j=0;j<=2;j++);
        {
            for( int k=0;k=4;k++);
            {
                sum +=a[i][j]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
   return 0;
}
