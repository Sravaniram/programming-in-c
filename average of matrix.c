#include <stdio.h>

int main()
{
    int n,m[10][10],i,j;
    float k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&m[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        s=s+m[i][j];
    }
    k=s/(n*n);
    printf("%f",k);
    
    return 0;
}
