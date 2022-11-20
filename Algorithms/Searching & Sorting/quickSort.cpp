//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    
    void swap(int& x,int& y){
        int temp = x;
        x = y;
        y = temp;
    }
    int conquer(int vec[],int first,int last){
        int frontPointer = first + 1;
        int lastPointer = last;
        while(frontPointer <= lastPointer){
            while(frontPointer <= last && vec[frontPointer] <= vec[first]){
                frontPointer++;
            }
            while(lastPointer >= first && vec[lastPointer] > vec[first]){
                lastPointer--;
            }
            if(frontPointer <= lastPointer)
                swap(vec[lastPointer--],vec[frontPointer++]);
        }
        swap(vec[first],vec[lastPointer]);
        return lastPointer;
    }

    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int pivot = conquer(arr,low,high);
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends