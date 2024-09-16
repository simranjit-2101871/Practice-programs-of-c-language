/*The reversing of a string is nothing but simply substituting the last element of a string to the 1st position of the string.

string-reverse

Different Methods to Reverse a String in C++ are:

Making our own reverse function 
Using ‘inbuilt’ reverse function 
Using Constructor
Using a temp file*/


/*CASE-1 . Making a Custom Reverse Function For Swapping Characters
Using a first to last approach ‘for’ loop */

#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}


int main()
{
	string str = "SIMRANJITsingh";
	reverseStr(str);
	cout << str;
	return 0;
}


/*CASE-2 USing last to first aprach using while loop it only trteverses not change the content of the */

#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
	int len = str.length();
	int n = len; 
	while(n--)
		cout << str[n];
}

int main(void)
{
	string s = "malhiji";

	reverse(s);
	return 0;
}



/*CASE-3 Using recursion fucntion whith two pointer aprach*/

#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str, int n, int i)
{
	
if(n<=i){return;}
// Swapping the character 
swap(str[i],str[n]);
reverseStr(str,n-1,i+1);

}


int main()
{
	string str = "cahndigarhuniversity";
	reverseStr(str, str.length()-1, 0);
	cout << str;
	return 0;
}


//CASE-4- Using one pointer aproach in recursion
//C++ program to reverse a string using recursion
#include <iostream>
using namespace std;
void getreverse(string &str, int i)
{
	if (i > (str.length() - 1 - i))
	{
		return;
	}
	swap(str[i], str[str.length() - i - 1]);
	i++;
	getreverse(str, i);
}
int main()
{
	string name = "sinkingship";

	getreverse(name, 0);
	cout << name << endl;
	return 0;
}


//CASE-5 Using inbuilt reverse function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "tommytommyyes";

	// Reverse str[begin..end]
	reverse(str.begin(), str.end());

	cout << str;
	return 0;
}


//CASE-6 Use a string cosntructor

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "GeeksforGeeks";

	// Use of reverse iterators
	string rev = string(str.rbegin(), str.rend());

	cout << rev << endl;
	return 0;
}
/*The use of str.rend() in conjunction with str.rbegin() does not swap elements in the string itself. Instead, it provides a mechanism for iterating 
through the string in reverse order without modifying the string's contents*/

