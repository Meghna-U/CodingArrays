#include<stdio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	int *p=&a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element - [%d],[%d]:",i,j);
			scanf("%d",&*((p+i*3)+j));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*((p+i*3)+j));
		}
		printf("\n");
	}
	for(i=0,j=0;i<3,j<3;i++,j++)
	{
		if(i==j)
		{
			sum+=a[i][j];
		}
	}
	printf("Sum of Diagonal elements:%d",sum);
}
