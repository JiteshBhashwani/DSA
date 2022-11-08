#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
inline void fast_io();

void selectionSort(vector<int> &arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int lowestIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			lowestIndex = ((arr[j] < arr[lowestIndex]) ? j : lowestIndex);
		}
		swap(arr[i], arr[lowestIndex]);
	}
}
void bubbleSort(vector<int> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
		for (size_t j = 1; j < arr.size() - i; j++)
			if (arr[j - 1] > arr[j])
				swap(arr[j - 1], arr[j]);
}
void insertionSortI(vector<int> &arr)
{
	for (size_t i = 1; i < arr.size(); i++)
	{
		int current = i; 
		while (arr[current] < arr[current - 1] && current > 0)
		{
			swap(arr[current], arr[current - 1]);
			current--;
		}
	}
}
void insertionSortII(vector<int> &arr)
{
	for (size_t i = 1; i < arr.size(); i++)
	{
		int current = i;
		int currentElement = arr[current];
		while (currentElement < arr[current - 1] && current > 0)
		{
			arr[current] = arr[current - 1];
			current--;
		}
		arr[current] = currentElement;
	}
}


int main()
{
	fast_io();
	
	
	
	
	return 0;
}

inline void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
