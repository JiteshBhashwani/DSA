#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int size)
{
    for(int i = 0;i < size;i++)cout<<arr[i]<<" ";cout<<endl;
}

int minElement(int arr[],int size)
{
    int minE = arr[0];
    for(int i = 0;i < size;i++) 
    {
        minE = min(minE,arr[i]);
    }
    return minE;
}

int maxElement(int arr[],int size)
{
    int maxE = arr[0];
    for(int i = 0;i < size;i++)
    {
        maxE = max(maxE,arr[i]);
    }
    return maxE;
}

int sum(int arr[],int size)
{
    int ans = 0;
    for (size_t i = 0; i < size; i++)
        ans+=arr[i];
    return ans;
}

int getIndexOf(int arr[],int size,int key)
{
    for (size_t i = 0; i < size; i++)
        if(arr[i] == key) return i;
    return -1;
}

void rev(int arr[],int size)
{
	int i = 0;
	while(i<size/2)
		swap(arr[i++],arr[size-1-(i)]);
}

void swapAlt(int arr[],int size)
{
	int i = 0;
	while(i<size)
	{
		swap(arr[i],arr[i+1]);
		i+=2;
	}
		
}

int main()
{
    int arr[]{6,5,4,3,2,1};
    swapAlt(arr,6);
    print(arr,6);
    return 0;
}

