/*
2. Features
ASCII	
ASCII’s main capability is enabling communications electronically, as well as in programming languages like HTML.

The representation of characters in ASCII is limited to the English language. It supports letters, numbers, and some common punctuation and symbols.

ASCII uses either 7 bits or 8 bits to represent various characters, which allows it to use less memory space than Unicode. The original version can
 only encode 128 characters using a 7-bit range, including non-printing control characters.

ASCII is a proper subset of Unicode, which means that Unicode includes all the characters that can be encoded in ASCII, plus many more. So, while 
ASCII is useful for representing characters in the English language, Unicode is capable of representing a much wider range of characters in other 
languages and scripts.


UNICODE
Unicode is the global standard for character encoding. It is designed to support the representation of characters from various languages and scripts, 
including Latin, Arabic, Cyrillic, and Greek.

The term Unicode stands for “universal character encoding.” It is standardized by the international IT industry to be used to encode and represent 
characters in computers.

One of the key advantages of Unicode is its ability to represent a large number of characters and symbols, including mathematical formulas, historical 
scripts, and even emojis. This is possible because Unicode uses four different encoding formats, known as UTF-7, UTF-8, UTF-16, and UTF-32. These 
formats use 7, 8, 16, and 32 bits, respectively.

While these formats allow Unicode to represent a much wider range of characters than ASCII, it also means that Unicode consumes more memory. However, 
this is not a constraint for memory-rich modern-day IT infrastructure.

The latest version of Unicode encrypts 161 written scripts, including 94 modern and 67 historical or ancient scripts. Naturally, this makes it a 
superset of ASCII, meaning that all the characters in the ASCII character set are also included in the Unicode character set.
*/
// C++ program to demonstrate
// Unicode Code point
// at a given index
#include <iostream>
using namespace std;

// Driver code
int main()
{
	// define input array/string
	char arr[] = "GeEkS";
	int code;

	// print arr
	cout << " Input String = " << arr;

	// execute a loop to traverse the arr elements
	for (int i = 0; arr[i] != '\0'; i++) {
		code = arr[i];

// display unicode code point at i-th index
cout <<"\n The Unicode Code Point At "<<i<< " is = " << code;
	}
	return 0;
}
