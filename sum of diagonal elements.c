#include <stdio.h>

int main()
{
    int i,j,k,n,a[10][10];
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            k=k+a[i][j];
           
            
        }
    }
    printf("%d",k);
return 0;
    
}
