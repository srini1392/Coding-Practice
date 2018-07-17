#include <stdio.h>

int search(int arr[], int l, int h, int key)
{
    if (l > h) return -1;
 
    int mid = (l+h)/2;
    if (arr[mid] == key) return mid;
 
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid])
    {
        /* As this subarray is sorted, we can quickly
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid])
        return search(arr, l, mid-1, key);
 
        return search(arr, mid+1, h, key);
    }
 
    /* If arr[l..mid] is not sorted, then arr[mid... r]
    must be sorted*/
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid+1, h, key);
 
    return search(arr, l, mid-1, key);
}
 
// Driver program
int main()
{
    int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    int i = search(arr, 0, n-1, key);
 
    if (i != -1)
    printf("Index :%d ",i);
    else
    printf("Key not found");
}
