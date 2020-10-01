#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3]=0,i=0,j=0;
printf("Enter elements for Matrix A: \n");
for(i=0;i<3;i++)
    
    
    {
     for(j=0;j<3;j++)
        {
         scanf("%d ",&a[i][j]);
        }
     }
printf("Enter elements for Matrix B:\n");
for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
printf("Addition of 2 Matrices = \n");
for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
        {
            c[i][j] = b[i][j] + a[i][j];
        }
    }
for(i=0;i<3;i++)
    {
     for(j=0;j<;j++)
            {
             printf("%d   ",c[i][j]);
            }
    printf("\n");     
    }
getch();
}
