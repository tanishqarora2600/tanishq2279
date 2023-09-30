#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Addition:-\n 890");
int a[5][5],b[5][5],c[5][5]=0,i=0,j=0 k=0;
for(i=0;i<5;i++)
    
    
    {
     for(j=0;j<5;j++)
        {
         scanf("%d ",&a[i][j]);
        }
     }
printf("Enter elements for Matrix B:\n");
for(i=0;i<5;i++)
      {
       for(j=0;j<5;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
printf("Addition of 2 Matrices = \n");
for(i=0;i<4;i++)
    {
     for(j=0;j<5;j++)
        {
            c[i][j] = b[i][j] + a[i][j];
        }
    }
for(i=0;i<5;i++)
    {
     for(j=0;j<5;j++)
            {
             printf("%d   ",c[i][j]);
            }
    printf("\n");     
    }
getch();
}
