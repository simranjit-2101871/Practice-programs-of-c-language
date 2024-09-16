/*The rename() function is used to rename a file in C. It changes the name of the file from old_name to new_name without modifying the content present in the file. It is defined inside <stdio.h> header file.

In this article, we will learn how to rename a file using the rename() function in C programming language.

Syntax of rename()
int rename (const char *old_name, const char *new_name);
If new_name is the name of an existing file in the same folder then the function may either fail or override the existing file, depending on the specific system and library implementation.

Parameters
old_name: String that represents the name of an existing file to be renamed.
new_name: String containing the new name of the file.
Return Value
The return type of the function is an integer.

If the file is renamed successfully, zero is returned and it prints a success message.
On failure, a nonzero value is returned and it prints an error message using perror().*/


//it is a c program
#include <stdio.h>

int main()
{
	// Old file name
	char old_name[] = "geeks.txt";

	// Any string
	char new_name[] = "geeksforgeeks.txt";
	int value;

	// File name is changed here
	value = rename(old_name, new_name);

	// Print the result
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
