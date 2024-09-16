/*Methods to Find the Length of a String
There are few methods to find the length of a string is mentioned below:

Using string::size
Using string::length: 
Using the C library function strlen() method: 
Using while loop: 
Using for loop: 



*/
//str.size()
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	// String obj
	string str = "GeeksforGeeks";

	// size of string object using size() method
	cout << str.size() << endl;

	return 0;
    //The size() function is consistent with other STL containers (like vector, map, etc.), 
}




// str.kength()
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	// String obj
	string str = "GeeksforGeeks";

	// size of string object using length method
	cout << str.length() << endl;

	return 0;
    // and length() is consistent with most people’s intuitive notion of character strings like a word, sentence, or paragraph. We say a paragraph’s length, not its size, so length() is to make things more readable.
    
}



// while loop
#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
	// String obj
	string str = "GeeksforGeeks";

	// The constructor of string will set it to the
	// C-style string,
	// which ends at the '\0'

	// size of string object Using while loop
	
	int i = 0;
	while (str[i])
		i++;
	cout << i << endl;

	return 0;
}


