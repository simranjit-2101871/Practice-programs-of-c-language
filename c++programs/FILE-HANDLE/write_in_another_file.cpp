/*Here, we will see how to read contents from one file and write it to another file using a C++ program. Let us consider two files file1.txt and file2.txt. We are going to read the content of file.txt and write it in file2.txt*/

#include<bits/stdc++.h> 
using namespace std; 


int main() 
{ 
// Input file stream object to 
// read from file.txt 
ifstream in("file1.txt"); 
	
// Output file stream object to 
// write to file2.txt 
ofstream f("file2.txt"); 
	
// Reading file.txt completely using 
// END OF FILE eof() method 
while(!in.eof()) 
{ 
	// string to extract line from 
	// file.txt 
	string text; 
		
	// extracting line from file.txt 
	getline(in, text); 
		
	// Writing the extracted line in 
	// file2.txt 
	f << text << endl; 
} 
return 0; 
}
