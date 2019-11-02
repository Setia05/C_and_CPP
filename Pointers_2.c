#include <stdio.h> //including library to display output 
#include <stdlib.h> //including standard library

void main()     //Driver code starts 

{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;  //including pointers using int function

 //Giving print statements to display the given output
 
   printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
   printf("------------------------------------------------------------\n");

   //using scanf command to get number from locations given by pointers 
   
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2);


 if(*ptr1>*ptr2) //initiating if else statement 
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1); 
 }
 else  //\n is used to shift it to next line
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}

