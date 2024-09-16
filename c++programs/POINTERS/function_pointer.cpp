/*Address of Function: We all know that every function’s code resides in memory, so every function has an address like all other variables in the 
program. The name of a function can be used to find the address of the function. We can get the address of a function by just writing the function’s 
name without parentheses in the function.


Function Pointer in C++
The function pointer is used to point functions, similarly, the pointers are used to point variables. 
It is utilized to save a function’s address. 
The function pointer is either used to call the function or it can be sent as an argument to another function.

Referencing and Dereferencing of the Function Pointer in C++
Similar to the pointer used with variables we perform referencing and dereferencing with a function pointer.

Referencing: When pointer is allocated the address of the function to be associated with it then this process is referred to as referencing.

Dereferencing: When we use the (*)operator  to get the value stored in the pointer.*/

#include <iostream>
using namespace std;

int multiply(int a, int b) { return a * b; }

int main()
{
	int (*func)(int, int);

	// func is pointing to the multiplyTwoValues function

	func = multiply;

	int prod = func(15, 2);
	cout << "The value of the product is: " << prod << endl;

	return 0;
}




/*Passing a function pointer as a parameter
When declaring a function pointer to store the memory address of the function but, when we want to pass the return value to the next function. We 
have two methods to perform this task. First, either pass the value we got or second pass the function pointer that already exists.*/
#include <iostream>
using namespace std;

const int a = 15;
const int b = 2;

// Function for Multiplication
int multiply() { return a * b; }

// Function containing function pointer
// as parameter
void print(int (*funcptr)())
{
	cout << "The value of the product is: " << funcptr()
		<< endl;
}


int main()
{
	print(multiply);
	return 0;
}


/*Function Pointers in C++
Function Pointer Declaration: int (*func)(int, int);
This declares a pointer func to a function that takes two int parameters and returns an int.

Assigning a Function to the Pointer: func = multiply;
This assigns the address of the multiply function to the pointer func.

Calling the Function via the Pointer:

cpp
Copy code
int prod = func(15, 2);
Here, func(15, 2) directly calls the function pointed to by func. The C++ language allows this syntax as a convenience.

Explicit Dereferencing (Not Necessary for Function Pointers)
If you were to dereference the function pointer explicitly, you could do so using the * operator, but it's not required:

cpp
Copy code
int prod = (*func)(15, 2);
This syntax is perfectly valid and equivalent to func(15, 2). Both forms will call the multiply function with arguments 15 and 2.

Why Explicit Dereferencing is Not Required
Syntax Convenience: The language designers of C++ chose to allow calling a function through a pointer without requiring the * operator to simplify 
the syntax and make the code more readable.
Function Call Operator: The function call operator () in C++ is overloaded to work with both function names and function pointers directly.*/