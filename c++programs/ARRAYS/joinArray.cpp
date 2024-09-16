/*Given two sorted arrays, the task is to merge them in a sorted manner.
Examples: 

Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
Output: arr3[] = {4, 5, 7, 8, 8, 9} */


//code 1-
#include <iostream>
using namespace std;

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and insert smaller element from arr1 or arr2 into mergedArr
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Store remaining elements of arr1
    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    // Store remaining elements of arr2
    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8,9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[n1 + n2];

    mergeSortedArrays(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

//CODE2-

#include<iostream>
#include<algorithm>
using namespace std;

void arrayGettingMerged(int a[],int b[],int result[],int n1,int n2){
    int k=0;
    int size=n1+n2;
    //filling values for a
    for(int i=0;i<n1;i++){
        result[k++]=a[i];
    }
    //filing values for b
    for(int i=0;i<n2;i++){
        result[k++]=b[i];
    }
    sort(result,result+size);


}
int main(){
    int arr[]={1,2,3,4,10,11};
    int arr2[]={5,6,7,8,9};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int mergearray[n1+n2];

    arrayGettingMerged(arr,arr2, mergearray,n1,n2);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergearray[i] << " ";
    }
    
    return 0;
}



//USING WHILE LOOP
#include<iostream>
#include<algorithm>
using namespace std;

void arrayGettingMerged(int a[],int b[],int result[],int n1,int n2){
    int k=0;
    int size=n1+n2;
    int i=0;
    int j=0;
    while(i< n1 || j<n2){
        if(i!=n1){
            result[k++]=a[i];
            i++;
        }
        else{
            result[k++]=b[j];
            j++;
        }
    }
    sort(result,result+size);


}
int main(){
    int arr[]={1,2,3,4,10,11};
    int arr2[]={5,6,7,8,9};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int mergearray[n1+n2];

    arrayGettingMerged(arr,arr2, mergearray,n1,n2);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergearray[i] << " ";
    }
    
    return 0;
}