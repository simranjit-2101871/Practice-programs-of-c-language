/*Transpose of a matrix is obtained by changing rows to columns and columns to rows. In other words, the transpose of A[][] is obtained by changing A[i][j] to A[j][i*/

#include <bits/stdc++.h> 
using namespace std; 
#define N 4

// This function stores transpose 
// of A[][] in B[][]
void transpose(int A[][N], 
			int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[N][N] = {{1, 1, 1, 1},
				{2, 2, 2, 2},
				{3, 3, 3, 3},
				{4, 4, 4, 4}};

	int B[N][N], i, j;

	transpose(A, B);

	cout << "Result matrix is \n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		cout << " " << B[i][j];
		cout <<"\n";
	}
	return 0;
}
