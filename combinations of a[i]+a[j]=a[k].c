#include<stdio.h>
int main(void)
{
	int n,i,j,k,c;
	c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]==a[k])
				{   if(c>=1)
					printf("\n%d %d %d",a[i],a[j],a[k]);
					else{
					printf("%d %d %d",a[i],a[j],a[k]);
					c+=1;}
				}
					
				
			}
		}
	}
	return 0;
}
