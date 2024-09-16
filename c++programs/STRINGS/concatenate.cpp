/*StringConcatenation
Methods of Concatenate String
There are 6 methods to Concatenate String  as mentioned below:

Using append( ) Function.
Using ‘+’ Operator.
Using strcat( ) Function.
Using C++ for Loop.
Using Inheritance.
Using the Friend Function and strcat() Function.*/


//code-1.
#include <iostream>
using namespace std;
 

int main()
{
    string init("this is init");
    string add(" added now");
 
    // Appending the string.
    init.append(add);
 
    cout << init << endl;
    return 0;
}

//code-2.
#include <iostream>
using namespace std;
 

int main()
{
    string init("this is init");
    string add(" added now");
 
    // Appending the string.
    init = init + add;
 
    cout << init << endl;
    return 0;
}


//code-3.
#include <iostream>
#include <string.h>
using namespace std;
 

int main()
{
    char init[] = "this is init";
    char add[] = " added now";
 
    // Concatenating the string.
    strcat(init, add);//only works with cahr array
 
    cout << init << endl;
 
    return 0;
}




//miscellaneous program
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s ="tommy";
    string a="jerry";
   for(int i=0; s[i]!=0;i++){
    cout<<s[i];
    
   }
   cout<<endl;

    for(int i=0; s[i]!=0;i++){
    cout<<s;
    
   }
   cout<<endl;

   for(int i=0; s[i]!=0;i++){
    cout<<i;
   }
   
   return 0;
}
