#include<iostream>   //Library Inclusion for Input/output operation
#include<fstream>   // Library for file operation

using namespace std;  // Usage of cout,cin,endl freely

// The main program starts here
int main(int argc,char *argv[])   //Complete declaration of main() statement
{
	char find_character;   // Character declaration i.e. to find a particular character
	int number_of_lines=0;  //To count the number of lines in a file
	FILE *file_pointer;  // Pointer declaration

	if (argc!=2) // Check if the argument given is proper
	{
		cout<<"Program format is invalid"<<endl; // Outputting statements
		return 1; // Returns a error!
	}

	cout<<"Opening "<< argv[1]<<endl; //Output statement to display which file is open

	file_pointer=fopen(argv[1],"r"); // Opening file for reading purpose
	if (file_pointer==NULL)  //If file not found then
	{
		cout<<"File does not exist!!"<<endl; //Output Statements
		return -1; // returns a error
	}
	while((find_character=fgetc(file_pointer))!=EOF) // Get a character from the file stream and also till End of File
	{
		if (find_character=='\n') // If character '\n' found then
			number_of_lines++; // Increment the line counter by 1
	}
	fclose (file_pointer); // Close the file pointed by fp
	cout<<"Total number of lines are: "<<number_of_lines<<endl; // Output statements
	return 0;  // return for sucessful excecution
} // End of the main program
