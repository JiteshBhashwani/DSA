#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
inline void fast_io();
inline void io_to_file();

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

void solution()
{
	int size;
	cin >> size;
	vector<int> vec(size);
	for (auto &&i : vec)
		cin >> i;
	
	// selectionSort(vec,size);
	
	// bubbleSort(vec);
	
	// insertionSortI(vec);

	// insertionSortII(vec);
	
	for (auto &&i : vec)
		cout << i << " ";
	cout << endl;
}

int main()
{
	io_to_file();
	fast_io();
	solution();
	return 0;
}
inline void io_to_file()
{
#ifndef ONLINE_COMPILER
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
inline void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
