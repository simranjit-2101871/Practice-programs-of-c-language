/*The string class in C++ provides overloaded operators for comparison. When you use these operators, the underlying implementation in the string 
class takes care of comparing the characters of the strings. Let's delve a bit into how it works.

!= Operator
When you write if (s1 != s2), the != operator for string objects is called. Internally, this operator does the following:

Length Check: First, it checks if the lengths of the two strings are different. If they are, the strings are not equal.
Character-by-Character Comparison: If the lengths are the same, it compares the characters of the two strings one by one using a loop. As soon as 
it finds a difference, it returns true (the strings are not equal).
*/
// CPP code to implement relational
// operators on string objects
#include <iostream>
using namespace std;

void relationalOperation(string s1, string s2)
{

	if (s1 != s2) 
	{
		cout << s1 << " is not equal to " << s2 << endl;
		if (s1 > s2)
			cout << s1 << " is greater than " << s2 << endl;
		else
			cout << s2 << " is greater than " << s1 << endl;
	}
	else
		cout << s1 << " is equal to " << s2 << endl;
}

// Driver code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	relationalOperation(s1, s2);
	string s3("Geeks");
	string s4("Geeks");
	relationalOperation(s3, s4);
	return 0;
}

//using compare fucntion or method
// CPP code perform relational
// operation using compare function
#include <iostream>

using namespace std;

void compareFunction(string s1, string s2)
{
	// comparing both using inbuilt function
	int x = s1.compare(s2);

	if (x != 0) {
		cout << s1 
			<< " is not equal to "
			<< s2 << endl;
		if (x > 0)
			cout << s1 
				<< " is greater than "
				<< s2 << endl;
		else
			cout << s2 
				<< " is greater than "
				<< s1 << endl;
	}
	else
		cout << s1 << " is equal to " << s2 << endl;
}

// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareFunction(s1, s2);
	string s3("Geeks");
	string s4("Geeks");
	compareFunction(s3, s4);
	return 0;
}
