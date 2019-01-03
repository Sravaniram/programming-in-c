#include<stdio.h>
void main()
{
    int i,n,m=1,j,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   m=1;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            m=m*a[j];
        }
            b[i]=m;
    }
    for(i=0;i<n;i++)
    {   
        if(i==0)
        printf("%d",b[i]);
        else
        printf(" %d",b[i]);
    }
   
}
