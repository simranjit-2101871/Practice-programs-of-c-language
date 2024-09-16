/*Given an array, the task is to copy these array elements into another array in reverse array.
Examples: 

Input: array: 1 2 3 4 5 
Output: 5 4 3 2 1 

Input: array: 10 20 30 4*/

// tis code is in c not in c++

/*#include <stdio.h> 
  
// Function to print the array 
void printArray(int arr[], int len) 
{ 
    int i; 
    for (i = 0; i < len; i++) { 
        printf("%d ", arr[i]); 
    } 
} 
  
 
int main() 
{ 
    int original_arr[] = {1, 2, 3, 4, 5}; 
    int len = sizeof(original_arr)/sizeof(original_arr[0]); 
  
    int copied_arr[len], i, j; 
     
    // Copy the elements of the array 
    // in the copied_arr in Reverse Order 
    for (i = 0; i < len; i++) { 
        copied_arr[i] = original_arr[len - i - 1]; 
    } 
  
    // Print the original_arr 
    printf(" Original array: "); 
    printArray(original_arr, len); 
  
    // Print the copied array 
    printf(" Resultant array: "); 
    printArray(copied_arr, len); 
  
    return 0; 
} */

/*Time Complexity: O(len)

Auxiliary Space: O(len)
*/