#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][4],b[4][4],c[4][4]=0,i=0,j=0;
printf("Enter elements for Matrix A: \n");
for(i=0;i<4;i++)
    
    
    {
     for(j=0;j<4;j++)
        {
         scanf("%d ",&a[i][j]);
        }
     }
printf("Enter elements for Matrix B:\n");
for(i=0;i<4;i++)
      {
       for(j=0;j<4;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
printf("Addition of 2 Matrices = \n");
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
        {
            c[i][j] = b[i][j] + a[i][j];
        }
    }
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
            {
             printf("%d   ",c[i][j]);
            }
    printf("\n");     
    }
getch();
}
