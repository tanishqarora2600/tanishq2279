#include<stdio.h>
void main()
{
int a[6],b[6],c[12]:
int i,j,same=0,y;
printf("Enter Array A: \t");
for(i=0;i<6;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter Array B: \t");
    printf("%d",y);
for(i=0;i<6;i++)
    {
     scanf("%d", &b[i]);
    }
for(i=0;i<6;i++)
    {
     c[i]=a[i];
    }
for(i=0,j=6;i<6,j<12;i++,j++)
    {
     c[j]=b[i];
    }
printf("Union of Array A and B is :\t ");
for(i=0;i<12;i++)
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

