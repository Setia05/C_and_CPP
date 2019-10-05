#include <stdio.h>  // Preprocessor Directives

int main() // Code Begins here
{
	int i,n; // Variable Declaration
	float num[10],sum=0.0,average; //Variable Declaration
	// Printing Statements for user Inputs
	printf("Average Calculator (Max upto 10 numbers) \n");
	printf("Average of how many numbers do you want: ");
	scanf("%d", &n); // Storing values 
	
	//Loop to take in values
	for (i=0;i<n;i++)
	{
		printf("Enter the number %d: ",i+1);
		scanf("%f",&num[i]);
		sum=sum+num[i]; // Compute Sum of the numbers entered 
	}
	average=sum/n; // Calculates Average 
	// prints the average of nos.
	printf("The average of nos. entered is: %.2f",average);
	return 0;
} // Program Ends here
