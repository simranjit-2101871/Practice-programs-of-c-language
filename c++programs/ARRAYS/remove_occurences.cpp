/*Here we will see how to remove all the occurrences of an element in an array using a C++ program. Below are the examples:

Input: {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7}
               target=3
Output: {1, 4, 6, 8, 9, 10, 7}

Input: {12, 11, 10, 17, 12, 4, 7, 12} 
            target=12
Output: {11, 10, 17, 4, 7}*/

#include <iostream>
using namespace std;
 
void remove_all_occurrence(int arr[],
                          int target,
                          int n)
{
  int cnt = 0;
   
  // Counting all occurrence of 
  // target element
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == target) 
      cnt++;
  }
       
  // Creating new array of 
  // size = original size - 
  // no. of target element
  int new_arr[n - cnt];
  int ind = 0;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] != target)
    {
      new_arr[ind] = arr[i];
      ind++;
    }
  }
       
  // Printing the new array 
  int m = (sizeof(new_arr) / 
           sizeof(new_arr[0]));
  for(int i = 0; i < m; i++)
  {
    cout << new_arr[i] << " "; 
  }
  return;
}
 
// Driver code
int main() 
{
  int arr[]={1, 4, 3, 6, 8,
             3, 9, 10, 3, 3, 7};
  int target = 3;
  int n = (sizeof(arr) / 
           sizeof(arr[0]));
  remove_all_occurrence(arr, target, n);
  return 0;
}






/*Optimized Approach (In-place Shifting)
In this method, shift the non-target element to the left side. 

Check whether the current element is the target element or not.
If it is the target element increase the cnt variable.
After this element, all the non-target elements will shift left with the gap of (n-cnt).
Below is the C++ program to remove all occurrences of an element from an array using an optimized approach:
8/
#include <iostream>
using namespace std;
 
void remove_all_occurrence(int arr[],
                          int target,
                          int n)
{
  int cnt = 0;
   
  // Shifting non target elements 
  // to the left side
  for(int i = 0; i < n; i++)
  {
    if(arr[i] != target)
    {
      arr[i - cnt] = arr[i]; 
    }
    else
    {
      cnt++;
    }
  }
   
  // Printing the array
  for(int i = 0; i < (n - cnt); i++)
  {
    cout << arr[i] << " ";
  }
  return;  
}
 
// Driver code
int main() 
{
  int arr[] = {1, 4, 3, 6, 8, 3,
               9, 10, 3, 3, 7};
  int target = 3;
  int n = (sizeof(arr) / 
           sizeof(arr[0]));
  remove_all_occurrence(arr, target, n);
  return 0;
}
Output
1 4 6 8 9 10 7 
Time Complexity: O(n)
Space Complexity: O(1)