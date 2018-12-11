#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--){
            if(i==j)
                printf("1");
            else
                printf(" 1");}
        printf("\n");
    }

    return 0;
}
