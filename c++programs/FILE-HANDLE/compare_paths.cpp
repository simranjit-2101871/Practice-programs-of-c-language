/*As we are given two paths of two files, we have to compare these two paths and check whether they are equal or greater or smaller using a C++ program.

Input:

path1 = "/a/b/c"    , path2 = "/a/b/"
Output:

path1 is greater than path2*/

//Using built-in compare function :

#include <iostream>
using namespace std;

// function to compare two paths
void pathCompare(string p1, string p2)
{

	// stores compared value 0 or >0 or <0
	const int res = p1.compare(p2);
	if (res > 0)
		cout << p1 << " is greater than " << p2;
	else if (res == 0)
		cout << p1 << " is equal to " << p2;
	else
		cout << p1 << " is less than " << p2;
	cout << "\n";
}


int main()
{
	string p1 = "/a/b/c";
	string p2 = "/a/b/";
	string p3 = "/a/b";
	string p4 = "/a/b";
	string p5 = "/a/b";
	string p6 = "/a/b.";
	pathCompare(p1, p2); // function call
	pathCompare(p3, p4); // function call
	pathCompare(p5, p6); // function call
	return 0;
}



//Using iteration(for & while loop) :


#include <iostream>
using namespace std;

// function to compare two paths
void pathCompare(string p1, string p2)
{
	int i = 0;
	// while loop to compare the paths
	while (p1[i] != '\0' || p2[i] != '\0') {
		// compare the character
		if (p1[i] != p2[i]) {
			cout << p1 << " is not equal to " << p2 << endl;
			return;
		}
		i++;
	}
	cout << p1 << " is equal to " << p2 << endl;
}


int main()
{
	string p1 = "/a/b/c";
	string p2 = "/a/b/";
	string p3 = "/a/b";
	string p4 = "/a/b";
	string p5 = "/a/b";
	string p6 = "/a/b.";
	pathCompare(p1, p2); // function call
	pathCompare(p3, p4); // function call
	pathCompare(p5, p6); // function call
	return 0;
}


//Using Comparison operators:

#include <iostream>
using namespace std;

// function to compare two paths
void pathCompare(string p1, string p2)
{

	// Comparing using if-else
	if (p1 > p2)
		cout << p1 << " is greater than " << p2 << endl;
	else if (p1 < p2)
		cout << p1 << " is less than " << p2 << endl;
	else
		cout << p1 << " is equal to " << p2 << endl;
}

// Driver code
int main()
{
	string p1 = "/a/b/c";
	string p2 = "/a/b/";
	string p3 = "/a/b";
	string p4 = "/a/b";
	string p5 = "/a/b";
	string p6 = "/a/b.";
	pathCompare(p1, p2); // function call
	pathCompare(p3, p4); // function call
	pathCompare(p5, p6); // function call
	return 0;
}


