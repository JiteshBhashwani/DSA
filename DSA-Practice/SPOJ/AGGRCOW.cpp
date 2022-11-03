#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& pos,int size,int cows,int PS){
	int cc = 1;//cow count
	int cp = pos[0];//current position
	for(int i = 0;i < size;i++){
		if(pos[i]-cp >= PS){
			cp = pos[i];
			cc++;  
		}
		if(cc==cows) return true;
	}
	return false;
}

int AGGRCOW(vector<int>& pos,int size,int cows){
	sort(pos.begin(),pos.end());
	int lo = 0;
	int hi = pos[size-1];
	int ans = -1;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(isPossible(pos,size,cows,mid))
		{
			ans = mid;
            lo = mid+1;
		}
		else 
			hi = mid-1;
	}
	return ans;
}


int main() {
	// your code goes here
    #ifndef ONLINE_COMPILER
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	int q;cin>>q;
	while(q--){
		int size; cin>>size;
		int cows; cin>>cows;
		vector<int> pos(size,0);
		for(auto&&i:pos) cin>>i;
		cout << AGGRCOW(pos,size,cows) << endl;
		
	}
	return 0;
}

