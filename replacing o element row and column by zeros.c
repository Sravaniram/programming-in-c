#include <stdio.h>

int main()
{
    int i,j,n,m,a[100][100],y,x,b[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {scanf("%d",&a[i][j]);
        b[i][j]=a[i][j];}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {   
                for(y=0;y<m;y++)
                    {b[i][y]=0;
                    }
                for(x=0;x<m;x++)
                    {b[x][j]=0;}
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {if(j==0)
        printf("%d",b[i][j]);
        else
        printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
