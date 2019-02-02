#include <stdio.h>

int main()
{
    int p[100],i,j,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    if(n==1)
    c=c+1;
    else{
    for(i=1;i<n;i++)
    {
        if((p[i]-1==p[i-1] && p[i]==p[i+1]-1) || (p[i]+1==p[i-1] && p[i]==p[i+1]+1))
        c=c+1;
        if(i==(n-1) && (p[i]+1==p[i-1] || p[i]-1==p[i-1]))
        c=c+1;
        
    }}
    printf("%d",c);
    

    return 0;
}
