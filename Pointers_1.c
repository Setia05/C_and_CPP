#include <stdio.h>   //standard file in c language
void main()              //main function is generated in void and having no return value
{
  int m=300;             //value of m is taken in integer
  float fx = 300.60;   // value of fx is taken in float
  char cht = 'z';

   printf("\n\n Pointer : Demonstrate the use of & and * operator :\n");
   //output command is given
   printf("--------------------------------------------------------\n");


  int *pt1;    //pointer is generated in integer
  float *pt2;  //pointer is generated in float
  char *pt3;   //pointer is created in character
  pt1= &m;     //value of pt1 is address of m
  pt2=&fx;     //value of pt2 is the address of variable fx
  pt3=&cht;    //value of pointer is the address of variable of cht

  //giving print statements to display outputs using pointers
  printf ( " m = %d\n",m);
  printf ( " fx = %f\n",fx);
  printf ( " cht = %c\n",cht);
  printf("\n Using & operator :\n");
  printf("-----------------------\n");
  printf ( " address of m = %p\n",&m);
  printf ( " address of fx = %p\n",&fx);
  printf ( " address of cht = %p\n",&cht);
  printf("\n Using & and * operator :\n");
  printf("-----------------------------\n");
  printf ( " value at address of m = %d\n",*(&m));
  printf ( " value at address of fx = %f\n",*(&fx));
  printf ( " value at address of cht = %c\n",*(&cht));
  printf("\n Using only pointer variable :\n");
  printf("----------------------------------\n");
  printf ( " address of m = %p\n",pt1);
  printf ( " address of fx = %p\n",pt2);
  printf ( " address of cht = %p\n",pt3);
  printf("\n Using only pointer operator :\n");
  printf("----------------------------------\n");
  printf ( " value at address of m = %d\n",*pt1);
  printf ( " value at address of fx= %f\n",*pt2);
  printf ( " value at address of cht= %c\n\n",*pt3);
}        //End of program
