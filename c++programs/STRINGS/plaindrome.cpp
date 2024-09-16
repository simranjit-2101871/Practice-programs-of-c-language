/*A string is said to be palindrome if the reverse of the string is the same as the string.*/

//USE INBUIT REVERSE FUNCTION AND THEN COMPARE THE RESULT

#include <bits/stdc++.h>
using namespace std;


string isPalindrome(string S)
{
	
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}




//TRAVERSE THE FUNCTION

#include <bits/stdc++.h>
using namespace std;


string isPalindrome(string S)
{
	// Iterate over the range [0, N/2]
	for (int i = 0; i < S.length() / 2; i++) {

		// If S[i] is not equal to
		// the S[N-i-1]
		if (S[i] != S[S.length() - i - 1]) {
			// Return No
			return "No";
		}
	}
	// Return "Yes"
	return "Yes";
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}

