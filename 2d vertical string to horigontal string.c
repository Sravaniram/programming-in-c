
#include <stdio.h>
int main()
{char a[100],b[100];
int i=0;
scanf("%s",a);
scanf("%s",b);
while(a[i]!='\0' || b[i]!='\0')
{if(i==0)
printf("%c%c",b[i],a[i]);
else
printf("\n%c%c",b[i],a[i]);
i=i+1;
}
    return 0;
}
