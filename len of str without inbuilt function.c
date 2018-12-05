#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int c=0,x=0;
    while(a[x]!='\0')
    {
        c=c+1;
        x=x+1;
    }
    printf("%d",c);

    return 0;
}
