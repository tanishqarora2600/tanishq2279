#include<stdio.h>
void main()
{
int a[4][4],B[4][4],C[4][4],i,j,k;
printf("Enter Matrix A:");
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
        {
         scanf("%d",&a[i][j]);
         
        }
    }
printf("Enter Matrix B:");
for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
for(i=0;i<4;i++)
    {
    for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(k=0;k<4;k++)
            {
                C[i][j] += (a[i][k]*B[k][j]);

            }
        }
    }
printf("Matrix Multiplication : ");
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
          {
           printf("%d ",C[i][j]);
          }
     printf("\n")
         ;
    }
}
