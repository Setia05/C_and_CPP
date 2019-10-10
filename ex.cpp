/* This program performs the following task:
 * 1. Find 3 highest numbers in a given array
 * 2. Splits the array into 2 one of even numbers and second of all odd numbers
 * 3. Takes the highest element and prints it as sum of second highest element
 * First in the program we have taken input from the user and sorted the array in ascending order
 * and then we have performed above mentioned task on that sorted array
*/

// Including of libraries
#include <iostream>

//Globally declaration of usage of std class for functions like cout,cin,etc.
using namespace std;

//The main code begins from here
int main()
{
	// Declaration of variables
	int array[10],size_of_array=0,i,j,x;  // Variables for task 1 mentioned above in comments
	int even[10],odd[10],z=0,k=0;  // Variables for task 2 mentioned above in comments
	int split,c; // Variables for task 3 mentioned above in comments

	// Asking for number of elements user wants to enter in the array with warning in brackets
	cout<<"How many numbers do you want to enter (it should be less than 10)?";
	cin>>size_of_array;  // Assiging the value in size of array

	// Taking the inputs for array from the user
	cout<<"Enter the number one at a time: ";
	// Entering the elements from user in the array
	for (i=0;i<size_of_array;i++)
		cin>>array[i];

	// Sorting of the array begins here
	// The 2 for loops are used to access the elements of the array
	for (i=0;i<size_of_array;i++)
	{
		for (j=i+1;j<size_of_array;j++)
		{
			// Elements gets compared here and get sorted out
			if (array[i]<array[j])
			{
				x=array[i];
				array[i]=array[j];
				array[j]=x;
			}
		}
	}
	// Sorting of elements ends here
	// The array gets split into even and odd numbers
	for (i=0;i<size_of_array;i++)  // Accessing elements of array
		{
		/* Checking elements if even
		 * Any number is said to be even if divided by 2 produces a remainder 0
		 */
		if (array[i]%2 == 0)  // Checking if number is even by dividing by 2 and remainder is 0
		{
			even[z]=array[i];  //Creating an even array
			z++;   			   // Incrementing for array space
		}
		else
		{
			odd[k]=array[i];  //creating odd array
			k++; 			  // Incrementing the array pointer
		}
		}
	// Display statements
	// Prints the 3 highest value in an array
	cout<<"Three largest numbers are: "<<array[0]<<"\t"<<array[1]<<"\t"<<array[2]<<"\n";
	int arr[size_of_array];
	for (int i = 0; i < size_of_array; i++)
	{
		if (i < size_of_array/2)
		{
			arr[i] = even[i];
		}
		else
		{
			arr[i] = odd[i - (size_of_array/2)];
		}
	}
	// Printing even-odd array
	cout <<"The even and odd array is: ";
	for (int i = 0; i < size_of_array; i++)
	{
		cout<< arr[i] << ' ';
	}
	// Perfomring the spliting of highest element as printing as sum of second highest element
	split=array[0]-array[1];
	//Creating space for insertion of an element
	for (c=size_of_array-1;c>=1;c--)
	{
		array[c+1]=array[c];
	}
	//Splits the highest element and inserts the additive element in the array
	array[0]=array[1];
	array[1]=split;

	// Printing of splitting element in terms of sum of second highest element
	cout<<"\nResultant Array is: ";
	for (c=0;c<=size_of_array;c++)
	{
		cout<<array[c];
		cout<<"\t";
	}
}
// End of main code
