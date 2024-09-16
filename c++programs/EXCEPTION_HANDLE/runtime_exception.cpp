/*A runtime error occurs while the program is running. Because this is not a compilation error, the compilation will be completed successfully. 
Here, we will learn how to handle runtime exceptions in C++. 

There are 5 types of runtime exceptions discussed here:
*/


/*1. Division By Zero
When we divide an integer value by zero then we get this type of error called division by zero error. It is also called floating-point exceptions 
(SIGFPE). Below is the C++ program to demonstrate division by zero exception:*/
 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 10; 
	int res = a / 0; 
	cout << res; 
	return 0; 
} 



/*2. Segmentation Faults
In the below code, the line *(str + 1) = ‘n’ tries to write to read-only memory. Below is the C++ program to demonstrate segmentation fault:

*/
#include <iostream> 
using namespace std; 

// Driver code 
int main() 
{ 
char *str; 
	
// Stored in read only part 
// of data segment 
str = "GeeksforGeeks";	 
	
// Trying to modify read only 
// memory 
*(str + 1) = 'n'; 
return 0; 
}



/*3. Large memory Allocation/Large Static Memory Allocation
In general, any compiler or any language will accept up to 10^8. However, to be on the safe side we generally used up to 10^7. In the below code, the size of the array is more than 10^8 so here we got an error due to large memory allocation. It is also called an abort signal (SIGABRT).*/
 
#include <iostream> 
using namespace std; 


int main() 
{ 
int a = 100000000000; 
int * arr = new int[a]; 
return 0; 
} 


/*
4. Type Specifier Error
The below code gives runtime error because here the variable “a” is defined as long long int but in scanf the format specifier used is %d instead 
of %lld this will cause the error.*/
 
#include <iostream> 
using namespace std; 

int main() 
{ 
	long long int a; 
	scanf("%d", &a); 
	return 0; 
} 



/*5. Invalid Memory Access During Runtime
In the below code, the array is assigned with a negative index value and this will cause invalid memory access. It will give a garbage value*/

#include <iostream> 
using namespace std; 

int arr[5]; 

int main() 
{ 
int a = arr[-10]; 
cout << a; 
return 0; 
} 



