#include <stdio.h>

int main()
{
    int a[100][100],j,k,l,m,i,p;
    scanf("%d %d",&m,&l);
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<j;k++)
            {
                if(a[i][j]<a[i][k])
                {
                    p=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=p;
                }
            }
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<l;i++)
        {
            for(k=0;k<i;k++)
            {
                if(a[i][j]<a[k][j])
                {
                    p=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=p;
                }
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
