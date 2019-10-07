#include<stdio.h> // Preprocessor Directives
int main() // Code Begins here
{
	//Variable Declaration
	int n,i,j;
	float median,num[10],temp;
	//Output Statements
	printf("Median of how many elements to be found: ");
	scanf("%d",&n);
	//Storing Values
	for (i=0;i<n;++i)
	{
		printf("Enter element %d",i+1);
		scanf("%f",&num[i]);
	}
	/* Sorting Array*/
	temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(num[j]<num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	/* Finding Mean if odd or even array elements */
	if( n%2 == 0)
	{
		median = (num[(n/2)-1]+num[(n/2)])/2.0;
	}
	else
	{
		median = num[(n/2)];
	}
	// Print median
	printf("Median of values entered is %.2f",median);
} // End of code
