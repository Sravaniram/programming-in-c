#include <stdio.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int c=0,x=0;
    while(a[x]!='\0')
    {
        if(a[x]==b[x])
        c=c+1;
        x=x+1;
    }
    if(c==x)
    printf("yes");
    else
    printf("no");

    return 0;
}
