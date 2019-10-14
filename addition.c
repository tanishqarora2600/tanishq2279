#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter elements for Matrix A: \n");
for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
        {
         scanf("%d",&A[i][j]);
        }
     }
printf("Enter elements for Matrix B:  \n");
for(i=0;i<2;i++)
      {
       for(j=0;j<2;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
printf("Addition of 2 Matrices= \n");
for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
        {
            C[i][j] = B[i][j] + A[i][j];
        }
    }
for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
            {
             printf("%d ",C[i][j]);
            }
    printf("\n");     
    }
getch();
}
