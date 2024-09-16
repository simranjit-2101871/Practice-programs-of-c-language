/*Given a 2D matrix, the task is to find Trace and Normal of matrix.
Normal of a matrix is defined as square root of sum of squares of matrix elements.
Trace of a n x n square matrix is sum of diagonal elements.
Examples :

Input: mat[][] = {{7, 8, 9},
                  {6, 1, 2},
                  {5, 4, 3}};
Output: Normal = 16  
         Trace  = 11
Explanation: 
Normal = sqrt(7*7+ 8*8 + 9*9 + 6*6 +
              1*1 + 2*2 + 5*5 + 4*4 + 3*3)   
       = 16
Trace  = 7+1+3 = 11

Input: mat[][] = {{1, 2, 3},
                  {6, 4, 5},
                  {2, 1, 3}};
Output: Normal = 10  
         Trace = 8
Explanation: 
Normal = sqrt(1*1 +2*2 + 3*3 + 6*6 + 4*4 + 
             5*5 + 2*2 + 1*1 + 3*3)   
Trace = 8(1+4+3)*/


#include<bits/stdc++.h> 
using namespace std; 

// Size of given matrix 
const int MAX = 100; 

// Returns Normal of a matrix of 
// size n x n 
int findNormal(int mat[][MAX], int n) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			sum += mat[i][j] * mat[i][j]; 
	return sqrt(sum); 
} 

// Returns trace of a matrix of 
// size n x n 
int findTrace(int mat[][MAX], int n) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) 
		sum += mat[i][i]; 
	return sum; 
} 

// Driven code 
int main() 
{ 
	int mat[][MAX] = {{1, 1, 1, 1, 1}, 
		{2, 2, 2, 2, 2}, 
		{3, 3, 3, 3, 3}, 
		{4, 4, 4, 4, 4}, 
		{5, 5, 5, 5, 5}}; 
	cout << "Trace of Matrix = " << 
			findTrace(mat, 5) << endl; 
	cout << "Normal of Matrix = " << 
			findNormal(mat, 5) << endl; 
	return 0; 
} 

/*Time Complexity : O(n*n) 
Space Complexity : O(1)*/
