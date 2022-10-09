// Problem: Christmas tree of height N
// Contest: HackerEarth
// URL: https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
using namespace std;
void printPascal(int n)
{
	if(n < 1) return; 
	if (n == 1)
	{
		cout << "1\n";
	}
	else
	{
	cout << "1 \n1 1 \n";

	vector<long> prev{0,1,1,0};

	for (size_t i = 2; i < n; i++)
	{
		vector<long> newprev{0,1};
		cout << "1 ";
		for (size_t j = 1; j < i; j++)
		{
			newprev.push_back(prev.at(j)+prev.at(j+1));
			cout << newprev.back() << " ";
		}
		cout << "1 \n";
		newprev.push_back(1);
		newprev.push_back(0);
		prev = newprev;
	}
	}
}
int main()
{
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		printPascal(x);
	}
}