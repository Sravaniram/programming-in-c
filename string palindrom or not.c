#include <stdio.h>

int main()
{
    char s[100],s1[100];
    int i,j=0,l=0,c=0;
    scanf("%s",s);
    while(s[j]!='\0')
    j++;
    for(i=j-1;i>=0;i--)
    {
     s1[l]=s[i];
     l++;
    }
    for(i=0;i<j;i++)
    {
        if(s1[i]==s[i])
        c=c+1;
    }
    if(c==j)
    printf("YES");
    else
    printf("NO");
    
    

    return 0;
}
