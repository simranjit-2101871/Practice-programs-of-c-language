/*Given two N x M matrices. Find a N x M matrix as the sum of given matrices each value at the sum of values of corresponding elements of the 
given two matrices. In this article, we will learn about the addition of two matrices.

Algorithm
Initialize a resultant matrix res[N][M].
Run a for loop for counter i as each row and in each iteration:
Run a for loop for counter j as each column and in each iteration:
Add values of the two matrices for index i, j, and store in res[i][j].
Return res.*/

#include<iostream>
using namespace std;
#define N 4

// This function adds A[][] and B[][],
// and stores the result in C[][]
void add(int A[][N], int B[][N], int C[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];
}


int main()
{
	int A[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int B[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	// To store the result
	int C[N][N];
	int i, j;
	add(A, B, C);

	cout << "Result matrix is " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			cout << C[i][j] << " ";
		cout << endl;
	}

	return 0;
}

/*Time Complexity: O(n2). 

Auxiliary Space: O(n2)*/