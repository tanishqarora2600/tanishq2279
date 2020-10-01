#include<stdio.h>
void main()
{
int a[5],b[5],c[10]:
int i,j,same=0,y;
printf("Enter Array A: \t");
for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter Array B: \t");
    printf("%d",y);
for(i=0;i<5;i++)
    {
     scanf("%d", &b[i]);
    }
for(i=0;i<5;i++)
    {
     c[i]=a[i];
    }
for(i=0,j=5;i<5,j<10;i++,j++)
    {
     c[j]=b[i];
    }
printf("Union of Array A and B is :\t ");
for(i=0;i<10;i++)
    {
    same=0;
    for(j=0;j<i;j++)
        {
        if(c[j]==c[i])
            {
             same=1;
             break;
            }
        }
    
    if(same==0)
        {
         printf("%d ",c[i]);
        }
    }
}

