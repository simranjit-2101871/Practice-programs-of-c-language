/*String class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character. There are several ways to access substrings and individual characters of a string. The string class supports the following functions for this purpose:

operator[]
at()
substr()
find()
find_first_of()
find_last_of()
*/



/*operator[]
operator[] returns the reference to the character at the position specified as the argument.
char& operator[](size_t pos);

Here, 
pos is the index of the character to be searched.
*/

#include <iostream>
using namespace std;


int main()
{
	string str("GeeksforGeeks");
	cout << str[4];
	return 0;
}


/*at()

at() function is used for accessing individual characters. With this function, character by character can be accessed from the given string
char& string::at (size_type idx)*/
#include <iostream>
using namespace std;

int main()
{
	string s("GeeksForGeeks");
	cout << s.at(4);
	return 0;
}

/*substr()

substr() function is used for retrieving a substring from a given string. This function takes two values start and len.

string.h is the header file required for string functions.
The starting index is 0.
Syntax-

string substr (size_type start, size_type len);

Here, 
start: Position of first character to be copied 
len: Length of the sub-string.*/
#include <iostream>
using namespace std;


int main()
{
	string s("GeeksForGeeks");
	cout << s.substr(1, 5);

	return 0;
}

/*find()

find() function is used to find the first occurrence of a substring in the specified string being called upon.

It returns the index of the first occurrence of the substring in the string.
The default value of the starting position is 0.
If the substring is not found then the function returns -1.
Syntax-

size_t find (const string& str, size_t pos = 0);

size_t find (const char* s, size_t pos = 0);*/

#include <iostream>
using namespace std;


int main()
{
	string s("GeeksForGeeks");
	cout << s.find("For");

	return 0;
}



/*find_first_of()

find_first_of() function is used to find the first character that matches any of the characters specified in the arguments. This function takes two arguments str and pos. 

Syntax-

size_t find_first_of (const string& str, size_t pos = 0) const;

Here, 
str is the string with characters to search for.
pos is the position of the first character in the string to be considered for search.*/
#include <iostream>
using namespace std;


int main()
{
	string s("GeeksForGeeks");
	cout << s.find_first_of('s');
	return 0;
}



/*find_last_of()

find_last_of() function is used for finding the location of last occurrence of the specified characters from the given string
find_last_of(char ch);

find_last_of(char ch, size_t position);

Here, 
ch is the character to be searched in the string.
position is the index till where the search is to be performed.
*/
#include <iostream>
using namespace std;


int main()
{
	string s("GeeksForGeeks");
	cout << s.find_last_of('s');
	return 0;
}








