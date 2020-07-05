#include<stdio.h>
main()
{
	int n,i,j,m,a[20],count=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!=0)
			{
				a[j]=0;
				count++;
			}
		}
		if(count%2 != 0 && a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	
}
