/*A matrix is a collection of numbers arranged in rows and columns. We can multiply two matrices if the number of columns in the first matrix should be equal to the number of rows in the second matrix. The product matrix has the number of rows the same as the first matrix and the number of columns the same as the second matrix.


Example
Input:
mat1[][] = {{1, 2},
                  {3, 4}}
mat2[][] = {{5, 6},
                   {7, 8}}
Multiplication of two matrices:
{{1*5 + 2*7    1*6 + 2*8},
 {3*5 + 4*7    3*6 + 4*8}}
Output:
{{19, 22},
 {43, 50}}
*/



#include<iostream>
using namespace std;

// Edit MACROs here, according to your Matrix Dimensions for
// mat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 3 // number of columns in Matrix-2

void mulMat(int mat1[][C1], int mat2[][C2])
{
	int rslt[R1][C2];

	cout << "Multiplication of given two matrices is:\n";

	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			rslt[i][j] = 0;

			for (int k = 0; k < R2; k++) {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}

			cout << rslt[i][j] << "\t";
		}

		cout << endl;
	}
}


int main()
{
	// R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
	// values in MACROs)
	int mat1[R1][C1] = { { 1, 1 }, { 2, 2 } };

	int mat2[R2][C2] = { { 1, 1, 1 }, { 2, 2, 2 } };

	if (C1 != R2) {
		cout << "The number of columns in Matrix-1 must "
				"be equal to the number of rows in "
				"Matrix-2"
			<< endl;
		cout << "Please update MACROs according to your "
				"array dimension in #define section"
			<< endl;

		exit(EXIT_FAILURE);
	}

	// Function call
	mulMat(mat1, mat2);

	return 0;
}

/*Complexity Analysis
Time complexity: O(n3). It can be optimized using Strassen’s Matrix Multiplication
Auxiliary Space: O(m1 * n2)*/
