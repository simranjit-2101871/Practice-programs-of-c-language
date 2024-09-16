/*Dividing a number by Zero is a mathematical error (not defined) and we can use exception handling to gracefully overcome such operations. If 
you write a code without using exception handling then the output of division by zero will be shown as infinity which cannot be further processed.*/
#include <iostream> 
using namespace std; 
  
// Defining function Division 
float Division(float num, float den) 
{ 
    // return the result of division 
    return (num / den); 
  
} 
  
int main() 
{ 
    // storing 12.5 in numerator 
    // and 0 in denominator 
    float numerator = 12.5; 
    float denominator = 0; 
    float result; 
  
    // calls Division function 
    result = Division(numerator, denominator); 
  
    // display the value stored in result 
    cout << "The quotient of 12.5/0 is "
         << result << endl; 
  
} 

//ways to solve the above problem
/*1) Using the runtime_error class
The runtime_error class is a derived class of Standard Library class exception, defined in exception header file for representing runtime errors.
Now we consider the exact same code but included with handling the division by zero possibility. Here, we have the try block inside main that 
calls the Division function. The Division function checks if the denominator passed is equal to zero if no it returns the quotient, if yes it 
throws a runtime_error exception. This Exception is caught by the catch block which prints the message “Exception occurred” and then calls the 
what function with runtime_error object e. The what() function {used in the code given below} is a virtual function of the class Standard exception 
defined in stdexcept header file, it is used to identify the exception. This prints the message “Math error: Attempted to divide by Zero”, after 
which the program resumes the ordinary sequence of instructions.*/

#include <iostream> 
#include <stdexcept> // To use runtime_error 
using namespace std; 
  
// Defining function Division 
float Division(float num, float den) 
{ 
    // If denominator is Zero 
    // throw runtime_error 
    if (den == 0) { 
        throw runtime_error("Math error: Attempted to divide by Zero\n"); 
    } 
  
    // Otherwise return the result of division 
    return (num / den); 
  
} // end Division 
  
int main() 
{ 
    float numerator, denominator, result; 
    numerator = 12.5; 
    denominator = 0; 
  
    // try block calls the Division function 
    try { 
        result = Division(numerator, denominator); 
  
        // this will not print in this example 
        cout << "The quotient is "
             << result << endl; 
    } 
  
    // catch block catches exception thrown 
    // by the Division function 
    catch (runtime_error& e) { 
  
        // prints that exception has occurred 
        // calls the what function 
        // using runtime_error object 
        cout << "Exception occurred" << endl 
             << e.what(); 
    } 
  
} 



//SUING CONSTRUCTOR

#include <iostream> 
#include <stdexcept> 
// For using runtime_error 
  
using namespace std; 
  
// User defined class for handling exception 
// Class Exception publicly inherits 
// the runtime_error class 
  
class Exception : public runtime_error { 
public: 
    // Defining constructor of class Exception 
    // that passes a string message to the runtime_error class 
    Exception() 
        : runtime_error("Math error: Attempted to divide by Zero\n") 
    { 
    } 
}; 
  
// defining Division function 
float Division(float num, float den) 
{ 
  
    // If denominator is Zero 
    // throw user defined exception of type Exception 
    if (den == 0) 
        throw Exception(); 
  
    // otherwise return the result of division 
    return (num / den); 
  
} // end Division 
  
int main() 
{ 
    float numerator, denominator, result; 
    numerator = 12.5; 
    denominator = 0; 
  
    // try block calls the Division function 
    try { 
        result = Division(numerator, denominator); 
  
        // this will not print in this example 
        cout << "The quotient is " << result << endl; 
    } 
  
    // catch block catches exception if any 
    // of type Exception 
    catch (Exception& e) { 
  
        // prints that exception has occurred 
        // calls the what function using object of 
        // the user defined class called Exception 
        cout << "Exception occurred" << endl 
             << e.what(); 
    } 
  
} /