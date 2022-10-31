#include <bits/stdc++.h> 

int firstOc(vector<int> arr,int size,int key)
{
    int answer = -1;
    int f = 0;
    int l = size-1;
    while(f<=l)
    {
        int mid = (f+l)/2;
        int midElement = arr[mid];
        if(midElement < key) f = mid+1;
        else if(midElement > key) l = mid-1;
        else 
        {
            answer = mid;
            l = mid-1;
        }
    }
    return answer;
}
int lastOc(vector<int> arr,int size,int key)
{
    int answer = -1;
    int f = 0;
    int l = size-1;
    while(f<=l)
    {
        int mid = (f+l)/2;
        if(arr[mid] < key) f = mid+1;
        else if(arr[mid] > key)l = mid-1;
        else 
        {
            answer = mid;
            f = mid+1;
        }
    }
    return answer;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return {firstOc(arr,n,k),lastOc(arr,n,k)};    
}
