/*Given source and destination text files. Append the content from the source file to the destination file and then display the content of the 
destination file.
Example :

Input : file.txt : "geeks", file2.txt : "geeks for"
Output: file2.txt : "geeks for geeks"*/

#include <bits/stdc++.h> 
using namespace std; 

// driver code 
int main() 
{ 
	fstream file; 

	// Input stream class to 
	// operate on files. 
	ifstream ifile("file.txt", ios::in); 

	// Output stream class to 
	// operate on files. 
	ofstream ofile("file2.txt", ios::out | ios::app); 

	// check if file exists 
	if (!ifile.is_open()) { 

		// file not found (i.e, not opened). 
		// Print an error message. 
		cout << "file not found"; 
	} 
	else { 
		// then add more lines to 
		// the file if need be 
		ofile << ifile.rdbuf(); 
	} 
	string word; 

	// opening file 
	file.open("file2.txt"); 

	// extracting words form the file 
	while (file >> word) { 

		// displaying content of 
		// destination file 
		cout << word << " "; 
	} 

	return 0; 
} 


//METHOD 2
/*fopen(): Returns a pointer to the object that controls the opened file stream
fprintf(): Writes the string pointed by format to the stream
fclose(): Closes the file associated with the stream and disassociates it.
fgetc(): Returns the character currently pointed by the internal file position indicator of the specified stream
Approach:*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
	// open file in read mode to read it's content
	FILE* file = fopen("file.txt", "r");

	// open file in append mode to append read content
	FILE* file2 = fopen("file2.txt", "a");
	if (file2 == NULL) {
		cout << "file not found";
		return 1;
	}
	else if (file == NULL) {
		cout << "file not found";
		return 1;
	}

	// Read contents from file
	char ch = fgetc(file);
	while (ch != EOF) {
	
		// print read content from file in file2
		fprintf(file2, "%c", ch);
		ch = fgetc(file);
	}
	fclose(file);
	fclose(file2);

	// open file 2 again in read mode to read the content
	FILE* file3 = fopen("file2.txt", "r");

	// Read contents from file
	char ch2 = fgetc(file3);
	while (ch2 != EOF) {
	
		// print read content from file
		printf("%c", ch2);
		ch2 = fgetc(file3);
	}
	fclose(file3);
}

// This code is contributed by Shivesh Kumar Dwivedi
