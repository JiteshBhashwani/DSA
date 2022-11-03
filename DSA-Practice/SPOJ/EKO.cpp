#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
inline void fast_io();
inline void io_to_file();

bool isPossible(vector<int>& treeHeight,int noOfTrees,int woodReq,int PS)
{
	int woodCollected = 0;
	for (size_t i = 0; i < noOfTrees; i++)
	{
		int cut = treeHeight[i]-PS;
		if(cut > 0) woodCollected+=cut;
		if(woodCollected >= woodReq) return true;
	}
	return false;
}

int EKO(vector<int>& treeHeight,int noOfTrees,int woodReq)
{
	sort(treeHeight.begin(),treeHeight.end());
	int lo = 0;
	int hi = treeHeight[noOfTrees-1];
	int ans = -1;
	while(lo<=hi)
	{
		int mid = lo + (hi-lo)/2;
		if(isPossible(treeHeight,noOfTrees,woodReq,mid))
		{
			ans = mid;
			lo = mid+1;
		}
		else hi = mid-1;
	}
	return ans;
}

void solution()
{
	int noOfTrees;cin>>noOfTrees;
	int woodReq;cin>>woodReq;
	vector<int> treeHeight(noOfTrees);
	for(auto&&i:treeHeight)cin>>i;
	cout << EKO(treeHeight,noOfTrees,woodReq) << endl;
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
