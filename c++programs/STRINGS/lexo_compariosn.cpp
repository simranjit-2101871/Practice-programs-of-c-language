/*Thus, lexicographical order is a way for formalizing word order where the order of the underlying symbols is given. In programming, lexicographical 
order is popularly known as Dictionary order and is used to sort a string array, compare two strings, or sorting array elements.

Lexicographical ordering means dictionary order. For ex: In dictionary 'ado' comes after 'adieu' because 'o' comes after 'i' in English alphabetic 
system. This ordering is not based on length of the string, but on the occurrence of the smallest letter first

Template:
template 
  bool lexicographical_compare(iter1 beg1, iter1 end1, iter2 beg2, iter2 end2)
Parameters : 
beg1 :  Input iterator to initial position of first sequence.
end1 :  Input iterator to final position of first sequence.

beg2 :  Input iterator to initial position of second sequence.
end2 :  Input iterator to final position of second sequence.

Return value : 
Returns a boolean true, if range1 is strictly lexicographically 
smaller than range2 else returns a false.

Time Complexity: O(N)

Space Complexity: O(1)*/



#include<iostream>
#include<algorithm> // for lexicographical_compare()
using namespace std;

int main()
{
	// initializing char arrays
	char one[] = "geeksforgeeks";
	char two[] = "gfg";
	
	// using lexicographical_compare for checking 
	// is "one" is less than "two"
	if( lexicographical_compare(one, one+13, two, two+3))
	{
		cout << "geeksforgeeks is lexicographically less than gfg";
		
	}
	else
	{
		cout << "geeksforgeeks is not lexicographically less than gfg";
		
	}
	
}


//SECOND CODE USES THE CONVERSION FRO UPPER TO LOWER CASE


#include<iostream>
#include<algorithm> // for lexicographical_compare()
using namespace std;

// helper function to convert all into lower case:
bool comp (char s1, char s2)
{
	return tolower(s1)<tolower(s2);
}

int main()
{
	// initializing char arrays
	char one[] = "geeksforgeeks";
	char two[] = "Gfg";
	
	// using lexicographical_compare for checking 
	// is "one" is less than "two"
	// returns false as "g" has larger ASCII value than "G"
	if( lexicographical_compare(one, one+13, two, two+3))
	{
		cout << "geeksforgeeks is lexicographically less than Gfg\n";
		
	}
	else
	{
		cout << "geeksforgeeks is not lexicographically less than Gfg\n";
		
	}
	
	// using lexicographical_compare for checking 
	// is "one" is less than "two"
	// returns true this time as all converted into lowercase
	if( lexicographical_compare(one, one+13, two, two+3, comp))
	{
		cout << "geeksforgeeks is lexicographically less ";
		cout << "than Gfg( case-insensitive )";
		
	}
	else
	{
		cout << "geeksforgeeks is not lexicographically less ";
		cout<< "than Gfg( case-insensitive )";
		
	}
	return 0;
}
