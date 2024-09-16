/*1. Syntax Errors
These are also referred to as compile-time errors. These errors have occurred when the rule of C++ writing techniques or syntax has been broken. 
These types of errors are typically flagged by the compiler prior to compilation.  

Example: In the below program we are getting an error because of a missing semicolon at the end of the output statement (cout) called syntax 
error. */
#include <iostream> 
using namespace std; 
  
int main() {  
  cout << "Geeks for geeks!" // missing semicolon 
  return 0;  
}




/*2. Runtime Errors
This type of error occurs while the program is running. Because this is not a compilation error, the compilation will be completed successfully.
These errors occur due to segmentation fault when a number is divided by division operator or modulo division operator. 

Example: Let us consider an array of length 5 i.e. array[5], but during runtime, if we try to access 10 elements i.e array[10] then we get 
segmentation fault errors called runtime errors. Giving only an array length of 5*/



/*3. Logical Errors
Even if the syntax and other factors are correct, we may not get the desired results due to logical issues. These are referred to as logical
 errors. We sometimes put a semicolon after a loop, which is syntactically correct but results in one blank loop. In that case, it will display 
 the desired output.

Example: In the below example, the for loop iterates 5 times but the output will be displayed only one time due to the semicolon at the end of 
for loop. These kinds of errors are called logical errors.
*/

#include <iostream> 
using namespace std; 
  
int main() { 
  int j; 
  // Cause of Logical error 
  for(j=0;j<=5;j++); 
  { 
    cout << "Geeks for geeks"; 
  } 
    return 0; 
}

/*
The issue in your code is due to the semicolon at the end of the for loop. The semicolon terminates the for loop, making it an empty loop that 
runs five times without doing anything. The block of code within the braces {} is not part of the loop; it is executed only once after the loop 
completes*/

/*4. Linker Errors
When the program is successfully compiled and attempting to link the different object files with the main object file, errors will occur. When 
this error occurs, the executable is not generated. This could be due to incorrect function prototyping, an incorrect header file, or other factors. If main() is written as Main(), a linked error will be generated. 
*/
#include <iostream> 
using namespace std; 
  
int Main() { 
  
    cout << "Geeks for geeks"; 
    return 0; 
} //undefined refrence to main



/*5. Semantic Errors
 When a sentence is syntactically correct but has no meaning, semantic errors occur. This is similar to grammatical errors. If an expression is 
 entered on the left side of the assignment operator, a semantic error may*/
 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int a = 10, b = 20, c; 
    a + b = c; 
  
    cout << c; 
    return 0; 
}