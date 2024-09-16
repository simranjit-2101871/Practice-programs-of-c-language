/*Getting the list of files in a directory is one of the most common operations performed by the Filesystem of an OS. The file explorer 
application in most operating systems performs the same operation in the background. In this article, you will learn how to get the list of files 
in a directory using C++

Two methods can be used to Get the List of Files in a Directory:

Using the system function  – ( functions in C++ )
Using the directory_iterator – ( Invoking directory traversing commands from the operating system’s command interpreter )  */

// C++ Program to Getting
// the list of files using
// the system function
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	// This variable contains the path to the directory
	// The path should be given inside double quotes
	// Therefore, escaped the enclosing quotes using
	// backslash
	string path(
		"\"C:\\Users\\Sauleyayan\\Desktop\\New folder\"");

	// The command which would do the file listing
	// A space is added at the end of the command
	// intentionally to make space for the path
	string command("dir /a-d ");

	// The path is appended after the command string
	command.append(path);

	// The string is converted to const char * as system
	// function requires
	const char* final_command = command.c_str();

	// Sending the final command as the argument to the
	// system function
	system(final_command);

	return 0;
}
/*The system function requires a const char* as its argument. The c_str() method of the string class converts the string object to a const char*. 
This conversion is necessary because system is a C-style function that does not accept std::string.




Understanding C-Style Functions
C-style functions refer to functions that are part of the C standard library. These functions use C's native data types and conventions, which are 
different from C++'s object-oriented features like std::string.

The system function is a C standard library function defined in the <cstdlib> (or <stdlib.h> in C) header. It is used to execute a command in the 
operating system's command-line shell. Here is the prototype of the system function:

Code
int system(const char *command);

Key Characteristics of system
Parameter: The system function takes a single argument, which is a command to be executed. This argument is of type const char*, meaning it expects 
a C-style string (a null-terminated array of characters).
Return Value: It returns an integer value which typically represents the exit status of the command executed.*/
