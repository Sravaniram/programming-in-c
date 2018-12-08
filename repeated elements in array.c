#include <stdio.h>

int main()
{
    int a[100],b[100];
int i,j,k,c=0;
scanf("%d",&k);
for(i=0;i<k;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<k;i++)
{
    for(j=0;j<k;j++)
        {
            if(a[i]==b[j]){
            
            if(c==0)
            printf("%d",a[i]);
            else
            printf(" %d",a[i]);}
            c=c+1;
        }
}
return 0;
}
