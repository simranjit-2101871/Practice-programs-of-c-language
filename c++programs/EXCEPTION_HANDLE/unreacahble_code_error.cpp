/*Unreachable code is a compile-time error in languages like C++, Java, and C or Unreachable code error occurs when the code can’t be compiled; 
but why it is just a warning in C++ & C ? Warnings are a way that the compiler indicates that the particular mentioned thing might become an 
error in future.

*/

// C++ Program to demonstrate 
// Unreacheable Code error 
#include <iostream> 
using namespace std; 
  
int c(); 
int main() 
{ 
    cout << c() << endl; 
    return 0; 
} 
int c() 
{ 
    int a = 3; 
    return a; // oops it is unreachable code 
    int b = 6; 
  