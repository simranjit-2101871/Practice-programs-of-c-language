/*When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference 
by putting ‘&’ in the declaration. 

Also, we can define a reference variable as a type of variable that can act as a reference to another variable. ‘&’ is used for signifying the 
address of a variable or any memory. Variables associated with reference variables can be accessed either by its name or by the reference variable 
associated with it.*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // ref is a reference to x.
    int& ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << '\n';

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << '\n';

    return 0;
}


//code2-

#include <iostream>
using namespace std;

// Function having parameters as
// references
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

// Driver function
int main()
{
    // Variables declared
    int a = 2, b = 3;

    // function called
    swap(a, b);

    // changes can be seen
    // printing both variables
    cout << a << " " << b;
    return 0;
}



/*References vs Pointers
Both references and pointers can be used to change the local variables of one function inside another function. Both of them can also be used to 
save copying of big objects when passed as arguments to functions or returned from functions, to get efficiency gain. Despite the above similarities,
 there are the following differences between references and pointers.

1. A pointer can be declared as void but a reference can never be void For example

int a = 10;
void* aa = &a; // it is valid
void& ar = a;  // it is not valid
2. The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer, triple-pointer. Whereas, the reference 
variable has only one/single level of indirection. The following code reveals the mentioned points:  

3. Reference variables cannot be updated.

4. Reference variable is an internal pointer.

5. Declaration of a Reference variable is preceded with the ‘&’ symbol ( but do not read it as “address of”).*/
