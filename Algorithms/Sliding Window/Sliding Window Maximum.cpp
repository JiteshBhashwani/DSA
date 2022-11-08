#include<bits/stdc++.h>
using namespace std;
vector<int> slidingMaximum(const vector<int> &A, int B) {
	vector<int> answer;
	int macs = INT_MIN;
	int back = 0;
	int front = 0;
	while(front < A.size())
	{
		macs = max(macs,A[front]);
		if(front+1-back==B)
		{
			answer.push_back(macs);
			back++;
		}
		front++;
		if(macs==A[back-1])
		{
			macs=INT_MIN;
			for (size_t i = back; i < front; i++)
			{
				macs = max(macs,A[i]);
			}
			
		}
	}
	return answer;
}