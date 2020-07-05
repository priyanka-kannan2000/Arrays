#include<stdio.h>
main()
{
	int row,col,i,j,flag=0,a[20][20],upstart=-1,downstart=-1,left_start=-1,right_start=-1,start=0;
	scanf("%d",&row);
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	right_start=a[0][0];
	i=0;
	j=0;
	while(i<row&&i>=0 && j<row&&j>=0)
	{
		if(a[i][j]==9)
		{
			printf("PATH");
			flag=1;
			break;
		}
		else if(right_start==0 || upstart==1)
		{
			start=a[i][j+1];
			j++;
			if(right_start==0)
			right_start=start;
			else
			{
				right_start=start;
				upstart=-1;
			}
		}
		else if(left_start==0 || downstart==1)
		{
			start=a[i][j-1];
			j--;
			if(left_start==0)
			left_start=start;
			else
			{
				left_start=start;
				downstart=-1;
			}
		}
		else if(upstart==0||left_start==1)
		{
			start=a[i-1][j];
			i--;
			if(upstart==0)
			upstart=start;
			else
			{
				upstart=start;
				left_start=-1;
			}
		}
		else if(downstart==0||right_start==1)
		{
			start=a[i+1][j];
			i++;
			if(downstart==0)
			downstart=start;
			else
			{
				downstart=start;
				right_start=-1;
			}
		}	
	}
	if(flag==0)
	printf("NO");

}
