#include <stdio.h>

int main()
{
    int i,j,a[100][100],k=0,m,n,x[100],c=0,p,q,t=0,max=0,y[100],o=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            
             if(a[i][j]==1)
            {   y[o]=i;
                o++;
                y[o]=j;
                o++;
                t=t+1;
                c=-1;
                for(p=i-1;p<=i+1;p++)
                {
                 for(q=j-1;q<=j+1;q++)
                  { if(a[p][q]==1)
                    c=c+1;
                  }
                }
           x[k]=c;
           k=k+1;
            }
        }
    }
    for(k=0;k<=t;k++)
             {  printf("%d ",x[k]);
                 if(x[k]>max)
                { max=x[k];
                    i=k;
                 }
             }

    printf("%d:%d:%d",y[2*i],y[(2*i)+1],max);
    return 0;
}
