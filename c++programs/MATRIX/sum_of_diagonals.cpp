/*Given a 2D square matrix, find the sum of elements in Principal and Secondary diagonals. For example, consider the following 4 X 4 input matrix.
 

A00 A01 A02 A03
A10 A11 A12 A13
A20 A21 A22 A23
A30 A31 A32 A33
The primary diagonal is formed by the elements A00, A11, A22, A33. 
 

Condition for Principal Diagonal: The row-column condition is row = column. 
The secondary diagonal is formed by the elements A03, A12, A21, A30.
Condition for Secondary Diagonal: The row-column condition is row = numberOfRows – column -1.*/


#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 100; 

void printDiagonalSums(int mat[][MAX], int n) 
{ 
	int principal = 0, secondary = 0; 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < n; j++)	 
		{ 
			// Condition for principal diagonal 
			if (i == j) 
				principal += mat[i][j]; 

			// Condition for secondary diagonal 
			if ((i + j) == (n - 1)) 
				secondary += mat[i][j]; 
		} 
	} 

	cout << "Principal Diagonal:" << 
			principal << endl; 
	cout << "Secondary Diagonal:" << 
			secondary << endl; 
} 

// Driver code 
int main() 
{ 
	int a[][MAX] = {{1, 2, 3, 4}, 
					{5, 6, 7, 8}, 
					{1, 2, 3, 4}, 
					{5, 6, 7, 8}}; 
	printDiagonalSums(a, 4); 
	return 0; 
} 
