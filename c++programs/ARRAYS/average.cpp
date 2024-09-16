/*Given an array, the task is to find the average of that array. Average is the sum of the array elements divided by the number of elements.

Examples:

Input: arr[] = {1, 2, 3, 4, 5}
Output: 3
Sum of the elements is 1+2+3+4+5 = 15 
and total number of elements is 5.
So average is 15/5 = 3

Input: arr[] = {5, 3, 6, 7, 5, 3}
Output: 4.83333
Sum of the elements is 5+3+6+7+5+3 = 29
and total number of elements is 6.
So average is 29/6 = 4.83333.

*/

//ITERATIVE APROACH
#include <iostream>
using namespace std;

// Function that return average
// of an array.
double average(int a[], int n)
{
    // Find sum of array element
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / n;
}

// Driver code
int main()
{
    int arr[] = { 10, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << average(arr, n) << endl;
    return 0;
}
/*Time Complexity: O(n), The time complexity of the above code is O(n) as it loops through all elements of the array to calculate the sum. 

Auxiliary Space: O(1), The space complexity is O(1)  asnor exta space is uesd.*/

