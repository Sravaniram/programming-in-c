#include <stdio.h>

int main()
{
    char s[100],s1[100],i=0,j=0;
    scanf("%s",s);
    while(i<strlen(s))
   {
        if(s[i]>='0' && s[i]<='9')
        {s1[j]=s[i];
        j=j+1;}
        i=i+1;
    }
    for(j=0;j<strlen(s1);j++)
    if(s1[j]>='0' && s1[j]<='9')
    printf("%c",s1[j]);

    return 0;
}
