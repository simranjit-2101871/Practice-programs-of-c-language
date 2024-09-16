/*Given a 4 x 4 matrix, the task is to interchange the elements of first and last columns and show the resulting matrix.
Examples: 
 

Input:
8 9 7 6
4 7 6 5
3 2 1 8
9 9 7 7
Output:
6 9 7 8
5 7 6 4
8 2 1 3
7 9 7 9

Input: 
9 7 5 1
2 3 4 1
5 6 6 5
1 2 3 1
Output: 
1 7 5 9
1 3 4 2
5 6 6 5
1 2 3 1
The approach is very simple, we can simply swap the elements of first and last column of the matrix in order to get the desired matrix as output.
Below is the implementation of the above approach:*/
 
#include <iostream> 
using namespace std; 

#define n 4 

void interchangeFirstLast(int m[][n]) 
{ 
	// swapping of element between first 
	// and last columns 
	for (int i = 0; i < n; i++) 
	{ 
		int t = m[i][0]; 
		m[i][0] = m[i][n - 1]; 
		m[i][n - 1] = t; 
	} 
} 

int main() 
{ 
	// input in the array 
	int m[n][n] = {{8, 9, 7, 6}, 
				{4, 7, 6, 5}, 
				{3, 2, 1, 8}, 
				{9, 9, 7, 7}}; 

	interchangeFirstLast(m); 

	// printing the interchanged matrix 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < n; j++) 
			cout << m[i][j] << " "; 
		cout << endl; 
	} 
    return 0;
} 
