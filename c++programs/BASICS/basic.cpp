//PROGRAM TO PRINT YOUR NAME
/*#include<iostream>
using namespace std;
int main(){
    string name ="simranjit";
    cout<<"My name is="<<name<<endl;
    return 0;
}*/




//PROGRAM TO GET INPUT FROM USER
/*#include<iostream>
using namespace std;
int main(){
    //int a;so since i put string in int datatype so it showed unexpected or default output
    string a;
    cin>>a;
    cout<<"My name is="<<a<<endl;
    return 0;
}*/





//TO KNOW THE ASCII VALUE OF A CHARACTER
/*#include <iostream>
using namespace std;
void printASCII(char c) {
   int i = c;
   cout<<"The ASCII value of "<<c<<" is "<<i<<endl;
}
int main() {
   printASCII('A');
   printASCII('a');
   printASCII('Z');
   printASCII('z');
   printASCII('$');
   printASCII('&');
   printASCII('?');
   return 0;
}*/





//PROGRAM TO KNOW THE SIZE OF DATATYPES
/*#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int integerType; 
    char charType; 
    float floatType; 
    double doubleType; 
  
    // Calculate and Print  the size of integer type 
    cout << "Size of int is: " << sizeof(integerType)<<endl; 
  
    // Calculate and Print the size of doubleType 
    cout << "Size of char is: " << sizeof(charType) <<endl; 
  
    // Calculate and Print the size of charType 
    cout << "Size of float is: " << sizeof(floatType)<<endl; 
  
    // Calculate and Print the size of floatType 
    cout << "Size of double is: " << sizeof(doubleType)<<endl; 
  
    return 0; 
}*/






//C++ program to convert Fahrenheit scale to Celsius scale
/*#include<iostream>
using namespace std;
 
// Function to convert Fahrenheit to Celsius
float Conversion(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}
 
// Driver code,main code
int main()
{
    float n = 40;
    cout << Conversion(n);
    return 0;
}
*/





//PROGRAM TO FIND SIMPLE INTERSET
    //Simple interest formula is given by: 
    //Simple Interest = (P x T x R)/100 
    //Where, 
    //P is the principal amount 
    //T is the time and 
    //R is the rate
/*#include<iostream>
  #include<math.h>
using namespace std;
 
// Driver code,main  execution code
int main()
{
    float P = 1, R = 1, T = 1;
 
    // Calculate simple interest 
    float SI = (P * T * R) / 100;
  
    cout << "Simple Interest = " << SI;
 
    return 0;
}*/

    





//PROGRAM TO FIND THE COMPOUND INTERSET 
    //Calculate Amount using formula, 
    //Amount = principal * (1 + rate / 100)time.
    //Calculate Compound Interest using Formula.
    //Finally, print the resultant value of CI.
/*#include <iostream>
#include<math.h>
using namespace std;
 
// Driver code
int main()
{
    double principal = 10000, rate = 5, time = 2;
 
    // Calculate compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;
 
    cout << "Compound interest is " << CI;
 
    return 0;
}*/








//FIND THE AREA OF THE GEOMETRICAL FIGURES
/*#include<iostream>
using namespace std;
 
// Utility function
int areaRectangle(int a, int b)
{
   int area = a * b;
   return area;
}
 
int perimeterRectangle(int a, int b)
{
   int perimeter = 2*(a + b);
   return perimeter;
}
 
// Driver code
int main()
{
  int a = 5;
  int b = 6;
  cout << "Area = " << areaRectangle(a, b) << endl;
  cout << "Perimeter = " << perimeterRectangle(a, b);
  return 0;
} 
*/







// C++ program to multiply two floating point numbers 
    //Creating a user-defined function 
    //called mul_floatnumbers that 
    //multiplies the numbers passed to 
    //it as an input. It gives you the 
    //product of these numbers. 
/*#include <iostream> 
using namespace std; 
float mul_floatnumbers(float a, float b) { return a * b; } 
  
// Driver code 
int main() 
{ 
    float A = 1.2, B = 3.0, product; 
  
    // Calling mul_floatnumbers function 
    product = mul_floatnumbers(A, B); 
  
    // Printing the output 
    cout << product; 
  
    return 0; 
    }*/