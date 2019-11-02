#include <stdio.h> //using standard input output library

void main() //Driver code starts from here for return type void
{
   int *a,i,j,tmp,n; //all these variables are created in integers
   
   //Giving print statements to display at output
 	printf("\n\n Pointer : Sort an array using pointer :\n"); 
	printf("--------------------------------------------\n");	   
   
	//scanf is used to get input from user 
   printf(" Input the number of elements to store in the array : ");
   scanf("%d",&n);
   
   //Print statement is given to 
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++) //initiating for loops to given numbers 
      {
	  printf(" element - %d : ",i+1); //Print statement using pointers(%d) 
	  scanf("%d",a+i); //(%d) will get the integer value to output
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j)) //Starting if loop to start swapping and calling 
       {
      tmp = *(a+i); //Swapping taking place 
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++) //Print statements to implement the result to output
      {
	  printf(" element - %d : %d \n",i+1,*(a+i)); 
	  }         
printf("\n");
}  
