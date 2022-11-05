#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        int K = pat.size();
    	unordered_map<char,int> hash1;
    	for(auto&&i:pat)hash1[i]++;
    	vector<int>ans;
    	int front = 0;
    	int back = 0;
    	unordered_map<char,int>hash2;
    	while(front<txt.size())
    	{
    		hash2[txt[front]]++;
    		if(front+1-back==K)
    		{
    			if(hash1==hash2)ans.push_back(back);
    			hash2[txt[back]]--;
    			if(hash2[txt[back]]==0) hash2.erase(txt[back]);
    			back++;
    		}
    		front++;
    	}
    	return ans;
    }
};