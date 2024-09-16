/*Here, we will see how to create a temporary file using a C++ program. Temporary file in C++ can be created using the tmpfile() method defined in 
the <cstdio> header file. The temporary file created has a unique auto-generated filename. The file created is opened in binary mode and has access 
mode “wb+”. These temporary files are automatically deleted when the program is terminated or when they are closed in the program using fclose().

std::FILE* tmpfile();

Return value: The associated file stream or a null pointer if an error has occurred*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;


int main()
{
	// Creating a file pointer which 
	// points to the temporary file 
	// created by tmpfile() method
	FILE* fp = tmpfile();

	// Content to be written in temporary file
	char write[] = "Welcome to Geeks For Geeks";

	// If file pointer is NULL there is 
	// error in creating the file
	if (fp == NULL) 
	{
		perror("Error creating temporary file");
		exit(1);
	}

	// Writing in temporary file the content
	fputs(write, fp);
	rewind(fp);

	// Reading content from temporary file 
	// and displaying it
	char read[100];
	fgets(read, sizeof(read), fp);
	cout << read;

	// Closing the file. Temporary file will 
	// also be deleted here
	fclose(fp);

	return 0;
}


/*Why Use FILE*

Encapsulation of File Information:
The FILE structure encapsulates various pieces of information about the file stream, such as the file descriptor, current position in the file, 
buffering information, and error flags.
A FILE* is a pointer to this structure, which allows functions to manipulate file streams using a single pointer rather than passing all the 
information separately.

Function Compatibility:
Standard I/O functions like fopen, fclose, fgets, fputs, and others expect a FILE* argument to perform operations on the file. These functions are
designed to work with FILE* pointers and not with other types of variables.
For example:
cpp
Copy code
FILE* fp = fopen("example.txt", "r");
Here, fopen returns a FILE* that is used by other file handling functions.

Dynamic Management:
File handling often involves dynamic allocation of resources. The FILE structure is typically allocated dynamically, and the pointer allows the program to manage this dynamic memory effectively.
A FILE* can be easily passed around between functions, providing a convenient way to share the file stream information without copying the entire structure.

Abstraction:
Using a FILE* provides a level of abstraction. The internal details of the FILE structure are hidden from the programmer, allowing for easier and safer file operations.
This abstraction ensures that the underlying implementation can change without affecting the code that uses file pointers.





Why Not Use a Normal Variable
A normal variable (such as an integer or a custom structure) cannot replace FILE* for several reasons:

Complexity:
The FILE structure contains multiple fields that represent the state of the file stream. It is not practical to replicate this complexity in a simple variable.

Function Requirements:
Standard library functions for file handling are explicitly designed to work with FILE*. They rely on the structure and semantics of the FILE type.
For example:
cpp
Copy code
void fclose(FILE* stream);
This function requires a FILE* to close the file. It cannot work with a different type.

Memory Management:
The FILE structure is often dynamically allocated, and a pointer is required to manage this memory. Using a normal variable would not allow for the flexible and dynamic allocation needed for file operations.*/