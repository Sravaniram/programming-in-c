#include <stdio.h>

int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*i+1);j++)
        {if(j==0)
        printf("1");
        else
        printf(" 1");}
    printf("\n");}

    return 0;
}
