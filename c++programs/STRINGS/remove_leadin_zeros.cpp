//CODE USING ERASE FUCNTION OF STRING 
#include <iostream>
#include <string>

using namespace std;

string removeZero(string str) 
{ 
    // Count leading zeros
    int i = 0; 
    while (i < str.length() && str[i] == '0')
        i++; 

    // If the string is all zeros, return "0"
    if (i == str.length())
        return "0";

    // Erase leading zeros
    str.erase(0, i);

    return str; 
} 

int main() 
{ 
    string str = "00000123569"; 
    str = removeZero(str); 
    cout << str << endl; // Output: "123569"
    
    string str2 = "0000";
    str2 = removeZero(str2);
    cout << str2 << endl; // Output: "0"

    return 0; 
}



//using stoi fucntion where the string is converted to integers ,which will remove the leading zeros automatically  
#include <iostream> 
using namespace std; 

int main() 
{ 

	string str; 
	str = "00000123569"; 
	int num = stoi(str); 
	str = to_string(num); 

	cout << "String after removing leading zeros is: "
		<< str << endl; 

	return 0; 
}
