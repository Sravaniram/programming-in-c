#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,h,m,m1;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    h=x1+x2;
    m1=y1+y2;
    if(m1>60)
    {
        m=m1%60;
        h=h+(m1/60);
        
    }
    printf("%d ",h);
    printf("%d",m);

    return 0;
}
