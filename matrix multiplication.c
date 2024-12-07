#include<stdio.h>
int main()
{
	int r,x,i,j,k;
	printf("Enter dimension:");
	scanf("%d",&r);
	int mat1[r][r],mat2[r][r],mat3[r][r];
	
	printf("Enter first matrix elements of %d X %d order:\n",r,r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter second matrix elements of %d X %d order:\n",r,r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Enter 1 for matrix adiition and 2 for multiplication");
	scanf("%d",&x);
	if(x==1){
		for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{   mat3[i][j]=0;
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	}
	else if (x==2)
	{
		for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<r;k++)
			{
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	}
	else {
		printf("Wrong input");
	}
	printf("Result of operation: \n",r,r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}	
}