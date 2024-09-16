/*An array of pointers is an array of pointer variables. It is also known as pointer arrays. We will discuss how to create a 1D and 2D array of 
pointers dynamically. The word dynamic signifies that the memory is allocated during the runtime, and it allocates memory in Heap Section. In a 
Stack, memory is limited but is depending upon which language/OS is used, the average size is 1MB.



Basic Pointer Arithmetic: Below is some points regarding Pointer Arithmetic:

*(P + 1):
P = 1000 and 1 = sizeof(int) = 4 bytes.
Hence, *(1004) and dereferencing by * (asterisk) symbol. Now, the final result is 38.

*(P) + 1:
P = 1000 
Hence, *(1000) and dereferencing by * (asterisk) symbol and then by adding 1 modifies the result to 23 + 1 = 24.
*/

#include <iostream>
using namespace std;


int main()
{
	// Dynamically creating the array
	// of size = 5
	int* p = new int[5];

	// Initialize the array p[] as
	// {10, 20, 30, 40, 50}
	for (int i = 0; i < 5; i++) {
		p[i] = 10 * (i + 1);
	}

	// Print the values using pointers
	cout << *p << endl;
	cout << *p + 1 << endl;
	cout << *(p + 1) << endl;
	cout << 2 [p] << endl;
	cout << p[2] << endl;
	*p++;

	// Pointing to next location
	cout << *p;

	return 0;
}







/*Dynamic 2D Array of Pointers in C++: A dynamic array of pointers is basically an array of pointers where every array index points to a memory block. This represents a 2D view in our mind. But logically it is a continuous memory block.

Syntax:

<dataType> **<Pointer name> = new <dataType> *[<size>]; 

Example:

int **P = new int *[4];

Note: The *(asterisk) symbol defines the level of the pointer, one * means one level of pointers, where ** implies two levels of pointers, and so on. Also, the level of the pointer must be the same as the dimensional array you want to create dynamically.

*/
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int N = 3;

	// Creating the array of pointers
	// of size N
	int** p = new int*[N];
	int x = 1;

	// For multiplying
	for (int i = 0; i < N; i++) {

		p[i] = new int[N];

		// Creating N sized int memory
		// block
		for (int j = 0; j < N; j++, x++) {

			p[i][j] = 10 * x;

			// The above statement can
			// also be written as:
			// *(*(p+i)+j) = 10 * x
		}
	}

	// Print the values using pointers
	cout << *p << endl;
	cout << **p << endl;
	cout << *p + 1 << endl;
	cout << **p + 1 << endl;
	cout << *(*(p + 1) + 0) << endl;
	cout << p[2][2] << endl;

	return 0;
}
