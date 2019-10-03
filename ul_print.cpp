#include <iostream>  // Basic Input/Output Operation
#include <string>    // String Operation Library

using namespace std;  // Using Standard Input/Output Commands

void lower_case (int i)   // Function to print lower case letters
{
	if (i<=122)				  // Prints i=122 ASCII VALUE OF 'z'
	{
		cout<<(char)i<<'\t';  // Typecasting to print alphabets
		lower_case(i+1);	  // Increment
	}
}
void upper_case (int j)   // Function to print upper case letters
{
	if (j<=90)            // Prints i=90 ASCII VALUE OF 'Z'
	{
		cout<<(char)j<<'\t';    //Typecasting to print alphabets
		upper_case(j+1); 		// Incrementing
	}
}

//Main Program Starting
int main (int argc, char*argv[])
{
	int i=97, j=65;  // Starting value of alphabets i=97 ASCII VALUE OF 'a' and j=65 ASCII VALUE OF 'A'
	string a=argv[1];   // Passing argument from main() function
	if (argc!=2)
	{
		cout<<"Entered more than 2 arguments!"<<endl;
	}

	else
	{
		//Checking what user has entered as argv[1]
		//Considering maximum possibilities user might enter
		if (a=="lowercase"||a=="lower_case"||a=="LOWERCASE"||a=="Lower_Case"||a=="lower"||a=="Lower_case"||a=="lower_Case")
		//If entered lower then go to lower_case() and print lower case alphabets
		{
			lower_case(i);
			cout<<endl;
		}
		else if (a=="uppercase"||a=="upper_case"||a=="UPPERCASE"||a=="Upper_Case"||a=="upper"||a=="Upper_case"||a=="upper_Case")
		//If entered lower then go to upper_case() and print upper case alphabets
		{
			upper_case(j);
			cout<<endl;
		}
		else  //If anything else entered then
		{
			cout<<"Invalid Input";
		}
	}
}
//End of main program
