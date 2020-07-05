#include<stdio.h>
//rotate the array by d times
main()
{
	int n,a[1000],i,j,d;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=d;i++)
	{
		int left=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=left;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
