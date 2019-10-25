#include<stdio.h>
int main() //main driver code
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d Whole numbers are:\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
