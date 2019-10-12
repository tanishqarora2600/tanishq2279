#include<stdio.h>
#include<conio.h>
void main()
{
int A[2][2],B[2][2],C[2][2],i,j;
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
            C[i][j] = A[i][j] + B[i][j];
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
