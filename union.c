#include<stdio.h>
void main()
{
int a[3],b[3],c[9], d[9] e[9]:

    
int i,j,same=0,y;
    printf("Union:- \n");
printf("Enter Array A: \t");
for(i=0;i<3;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter Array B: \t");
    printf("%d",y);
for(i=0;i<3;i++)
    {
     scanf("%d", &b[i]);
    }
for(i=0;i<5;i++)
    {
     c[i]=a[i];
    }
for(i=0,j=3;i<3,j<9;i++,j++)
    {
     c[j]=b[i];
    }
printf("Union of Array A and B is :\t ");
for(i=0;i<9;i++)
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

