/*Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate 
dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers.\

datatype *var_name; 
int *ptr;   // ptr can point to an address which holds int data

The reason we associate data type with a pointer is that it knows how many bytes the data is stored in. When we increment a pointer, we increase the pointer by the size of the data type to which it points.*/


#include <bits/stdc++.h>
using namespace std;
void simranjit()
{
    int var = 20;

    // declare pointer variable
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}

int main() 
{ 
  simranjit(); 
  return 0;
}

/*Array Name as Pointers
An array name contains the address of the first element of the array which acts like a constant pointer. It means, the address stored in the array name can’t be changed. 
For example, if we have an array named val then val and &val[0] can be used interchangeably. */

#include <bits/stdc++.h>
using namespace std;
void simranjit()
{
    // Declare an array
    int val[3] = { 5, 10, 20 };

    // declare pointer variable
    int* ptr;

    // Assign the address of val[0] to ptr
    // We can use ptr=&val[0];(both are same)
    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
}
// Driver program
int main() { simranjit(); }





/*A limited set of arithmetic operations can be performed on pointers which are:

incremented ( ++ )
decremented ( — )
an integer may be added to a pointer ( + or += )
an integer may be subtracted from a pointer ( – or -= )
difference between two pointers (p1-p2)

(Note: Pointer arithmetic is meaningless unless performed on an array.)
*/

#include <bits/stdc++.h>
using namespace std;
void simranjit()
{
    // Declare an array
    int v[3] = { 10, 100, 200 };

    // declare pointer variable
    int* ptr;

    // Assign the address of v[0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i++) {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";

        // Increment pointer ptr by 1
        ptr++;
    }
}

// Driver program
int main() { simranjit(); }


/*Invalid pointers
A pointer should point to a valid address but not necessarily to valid elements (like for arrays). These are called invalid pointers. Uninitialized pointers are also invalid pointers.

int *ptr1;
int arr[10];
int *ptr2 = arr+20;*/




