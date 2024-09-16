//use insert function of different syntax to do this
//first code for example purpose 

/*insert() is used to insert characters in string at specified position. It supports various syntaxes to facilitate same

string& string::insert (size_type idx, const string& str)
idx :is the index number
str : is the string from which characters is to be picked to insert 
Returns *this.
Errors: 
Throws out_of_range if idx > size().
Throws length_error if the resulting size exceeds the maximum number of characters.*/
// CPP code for insert (size_type idx, const string& str) 

#include <iostream> 
#include <string> 

using namespace std; 

// Function to demonstrate insert 
void insertDemo(string str1, string str2) 
{ 

	// Inserts str2 in str1 starting 
	// from 6th index of str1 
	str1.insert(6, str2); 
	cout << "Using insert : "; 
	cout << str1; 
} 

// Driver code 
int main() 
{ 
	string str1("Hello World! "); 
	string str2("GeeksforGeeks "); 

	cout << "Original String : " << str1 << endl; 
	insertDemo(str1, str2); 

	return 0; 
} 
