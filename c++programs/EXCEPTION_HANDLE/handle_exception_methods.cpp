/*Exception handling is a manner to handle the runtime error, we carry out exception handling, so, the normal flow of the program may be 
maintained even after runtime errors. Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. 

The Exception Handling mechanism offers a way to transfer control from one part of a program to another, This makes it clean to separate the 
mistake handling code from the code written to address the real functionality of the program.

C++ provides the following specialized keywords for exception handling:

try: A block of code that may throw an exception is typically placed inside the try block, It’s followed by one or extra seize blocks. If an 
exception happens, it is thrown from the try block.

catch: This block catches the exception thrown from the try block, code to address the exception is written inside this catch block
.
throw: throw keyword is used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself*/

#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  int numerator = 5; 
  int denominator = 0; 
    
  int ans = numerator/denominator; 
    
  // The result will not be displayed  
  cout << ans << endl; 
    
  return 0; 
    
} 

//improved one
#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  int numerator = 5; 
  int denominator = 0; 
  int result; 
    
  try
  { 
    if(denominator == 0) 
    { 
      throw denominator; 
    } 
    result = numerator / denominator; 
  } 
  catch(int ex) 
  { 
    cout << "Exception: Divide by zero not allowed :" <<  
             ex << endl; 
  } 
  cout << "Division Result is: " << result; 
    
  return 0; 
}


//prgram two
#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  try 
  { 
    int age = 10; 
    if (age >= 18)  
    { 
      cout << "YES, you are old enough."; 
    }  
    else 
    { 
      throw (age); 
    } 
  } 
  catch (int num)  
  { 
    cout << "No, You must be at least 18 years old" << 
             endl; 
    cout << "Age is: " << num;   
  } 
  return 0; 
}