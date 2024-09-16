/*String str is given which contains lowercase English letters and spaces. It may contain multiple spaces. Get the first letter of every word and return the result as a string. The result should not contain any space.
 Examples: 

Input: str = "geeks for geeks"
Output: gfg

Input: str = "happy   coding"
Output: hc
*/
//lets do it by using count varable
#include<iostream>
using namespace std;

void firstletter(string a,int n){
    int count=0;
    //edge case ,if string is empty
    if(n<1){
        cout<<"Program terminated";
    }

    for(int i=0;i<n;i++){
        if(a[i]!=' ' && count==0){
            cout<<a[i];
            count=1;
        }
        if(a[i]==' '){
            count=0;
        }
    }
}
int main(){
    string s="simranjit singh malhi";
    int str=s.length();
    firstletter(s,str);
    return 0;
}





//CODE DONE USING BOOL VARIABLE

#include<bits/stdc++.h>
using namespace std;

// Function to find string which has 
// first character of each word.
string firstLetterWord(string str)
{
	string result = "";

	// Traverse the string.
	bool v = true;
	for (int i = 0; i < str.length(); i++)
	{
		// If it is space, set v as true.
		if (str[i] == ' ')
			v = true;

		// Else check if v is true or not.
		// If true, copy character in output
		// string and set v as false.
		else if (str[i] != ' ' && v == true)
		{
			result.push_back(str[i]);
			v = false;
		}
	}

	return result;
}

int main()
{
	string str = "simranjit singh malhi";
	cout << firstLetterWord(str);
	return 0;
}

