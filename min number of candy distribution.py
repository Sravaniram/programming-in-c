#include <stdio.h>

int main()
{
    int a[100],i,j,k=1,m=1,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
        }
    }
    for(i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                m=k+m;
            }
            else
            {
                k=k+1;
                m=m+k;
            }
        }
    printf("%d",m);
    return 0;
}
