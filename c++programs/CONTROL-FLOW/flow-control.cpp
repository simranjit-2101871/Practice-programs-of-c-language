// C++ PROGRAM TO CHECK EVEN ODD NUMBERS 
/*#include <iostream> 
using namespace std; 
  
// Returns true if n is 
// even, else odd 
bool isEven(int n) { return (n % 2 == 0); } 
  
// Driver code 
int main() 
{ 
    int n = 101; 
    if (isEven(n)) 
        cout << "Even"; 
    else
        cout << "Odd"; 
  
    return 0; 
}*/





//FIND THE LARGEST MAOMG THREE NUMBERS
    //if-else statement
/*#include <iostream>
using namespace std;
 

int main()
{
    int a, b, c;
    cout << "Enter the three numbers a, b & c" << endl;
    cin >> a >> b >> c;
 
    if (a >= b) {
        // If 'a' is greater than or equal to 'b', compare
        // 'a' with 'c'
        if (a >= c) {
            // If 'a' is also greater than or equal to 'c',
            // it is the largest number
            cout << "The Largest Among Three Numbers is : "
                 << a << endl;
        }
        else {
            // If 'a' is not greater than or equal to 'c',
            // 'c' must be the largest number
            cout << "The Largest Among Three Numbers is : "
                 << c << endl;
        }
    }
    else {
        // If 'b' is greater than 'a', compare 'b' with 'c'
        if (b >= c) {
            // If 'b' is also greater than or equal to 'c' 
            // it is the largest number
            cout << "The Largest Among Three Numbers is : "
                 << b << endl;
        }
        else {
            // If 'b' is not greater than or equal to 'c',
            // 'c' must be the largest number
            cout << "The Largest Among Three Numbers is : "
                 << c << endl;
        }
    }
    return 0;


    //when using temp variable

// temporary variable
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int a = 1, b = 10, c = 4;
 
    // temporary variable where we assumed a is max
    int max = a;
 
    if (max < b)
        max = b;
    if (max < c)
        max = c;
 
    printf("%d is the maximum out of %d, %d, and %d", max,
           a, b, c);
 
    return 0;
}*/





//CHECK WHETHER THE GIVEN CHARACTER IS A VOWEL OR CONSONANT
/*#include<iostream>
using namespace std;

//use fucntion call method here
void vowelORnot(char x){
    if(x=='a' || x=='e' ||x=='i' || x=='o' || x=='u'){
        cout<<"The given character:"<<x<<":is a vaowel"<<endl;
    }
    else{
        cout<<"It is not a vowel"<<endl;
    }
}
int main(){
    vowelORnot('E');
    vowelORnot('i');

    return 0;
}*/








//CHECK FOR THE LEAP YEAR
/*#include <iostream>
using namespace std;
 
// Function to check leap year
bool checkYear(int year)
{
   
    // not a leap year if divisible by 100
    // and divisible by 400
    if (year % 100 == 0 && year % 400!=0) {
        return false;
    }
 
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
        return true;
    }
 
    // all other years are not leap years
    else {
        return false;
    }
}
 
// Driver code
int main()
{
    int year = 1600;
 
    checkYear(year) ? cout << "Leap Year"
                    : cout << "Not a Leap Year";
 
    return 0;
}
*/








//PRINT THE TABLE FOR ANY NUMBER
/*#include<iostream>
using namespace std;
void TABLE(int a){
    int result=1;
    for(int i=0;i<=10;i++){
        result=a*i;
        cout<<a<<" * "<<i<<" = "<<result<<endl;
        }
}
int main(){
    int a=2;
    TABLE(a);
    return 0;
}
*/








//PRINT THE FACTORIAL OF THE NUMBER
    //using for loop
/*#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 
// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}*/

    //using recursion
/*#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
    }*/








//C program to reverse  a number
    //USING FOR  and formula
/*#include<iostream>
using namespace std;
void revthestring(int a[], int size){
    int temp;
    for(int i =0; i < size/2 ;i++){
        temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
        //size--; if we do by this method then the size varaible will get modified again and again hence will show problem while printing the output so either use formula or print the reverse string by usng other varable

    }
    cout<<"String after reversing"<<endl;
    for(int i=0 ; i < size ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[10];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    revthestring(arr,n);
    cout<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    } 
    return 0; 
    
}*/
//by return ing method
/*int* revthestring(int a[], int size){
    int temp;
    for(int i = 0; i < size/2; i++){
        temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
    }
  
    // Returning the reversed array
    return a;
}

int main(){
    int arr[10];
    int n = 5;
    
    // Input elements into the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 

    // Call the function to reverse the array and store the result
    int* reversedArray = revthestring(arr, n);

    // Print the reversed array
    cout << "Reversed array in main" << endl;
    for(int i = 0; i < n; i++){
        cout << reversedArray[i] << " ";
    } 
    cout << endl;
    
    return 0; 
}*/

    //BIT RPRRESENTATION
/*
#include <bits/stdc++.h> 
using namespace std; 

// Iterative function to 
// reverse digits of num 
int reverseDigits(int num) 
{ 
	int rev_num = 0; 
	while (num > 0) { 
		rev_num = rev_num * 10 + num % 10; 
		num = num / 10; 
	} 
	return rev_num; 
} 

// Driver code 
int main() 
{ 
	int num = 4562; 
	cout << "Reverse of num is " << reverseDigits(num); 

	getchar(); 

	return 0; 
}*/
//USING A LOOP IT WOULD BE SIMPL//









//CHECK A NUMBER TO BE PRIME OR NOT
/*#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Driver code
int main()
{
    isPrime(11) ? cout << " true\n" : cout << " false\n";
    isPrime(15) ? cout << " true\n" : cout << " false\n";
    return 0;
}
*/





//FIND THE PRIME NUMBERS ETWEEN INTERVALS//
/*#include<iostream>
using namespace std;
int main(){
    int a ,b,i,j,flag;
    cout<<"enter the lower bound value="<<endl;
    cin>>a;
    cout<<"Enter the value of upper bound="<<endl;
    cin>>b;

    //now traversing brgins
    for( i=a;i<=b;i++){
        if(i==1||i==0){
            continue;
        }
        flag=1;
        for( j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
            }
        }
    }

    if(flag==1){
        cout<<i<<" ";
    }
    return 0;
}
*/









//Check AND PRINT HE NEON NUMBER IN A GIVEN RANGE
/*#include<iostream>
using namespace std;

    int neonsum(int x){
        int square=x*x;

        int sumofdigit=0;
        while(square!=0){
            sumofdigit=sumofdigit + square%10;
            square=square/10;
        }
        return 0;
    }
int main(){
    for(int i=1;i<=1000;i++){
        if(neonsum(i))
        cout<<i<<" ";
    }
    return 0;
}*/
