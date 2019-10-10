// Preprocessor Directives

#include <stdio.h>

// Function to swap the values 
void swap(int *xp, int *yp)  // Pointer to point values
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform Bubble Sort in Ascending Order
void bubbleSortacending(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])        // Checking values greater than or less than
              swap(&arr[j], &arr[j+1]);  // Function Call for swapping
}

// Function to perform Bubble Sort in Decending Order
void bubbleSortdecending(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] < arr[j+1])         // Checking values greater than or less than
              swap(&arr[j], &arr[j+1]);  // Function Call for swapping
}

// Function to print the array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// The main code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; //Entered Array this could be taken from user using for loop
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSortacending(arr, n);  // Function to sort the array
    printf("Sorted array (Ascending Order): \n"); // Output the statement
    printArray(arr, n);    //Function to print the array
    bubbleSortdecending(arr,n); // Function to sort the array
    printf("Sorted array (Descending Order): \n");  // Output the statement
    printArray(arr, n); // Function to sort the array
    return 0;
}
// End of the code
