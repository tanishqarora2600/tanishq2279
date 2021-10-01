#include<stdio.h>
void main()
{
int a[2][2],B[2][2],C[2][2],i,j,k;
printf("Enter Matrix A:");
for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
printf("Enter Matrix B:");
for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
            {
                C[i][j] += (a[i][k]*B[k][j]);

            }
        }
    }
printf("Matrix Multiplication : ");
for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
          {
           printf("%d ",C[i][j]);
          }
     printf("\n");
    }
}
