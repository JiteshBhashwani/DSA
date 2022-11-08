#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K){
	vector<long long> answer;
	list<long long> stk;
	int front{0},back{0};
	while(front<N)
	{
		if(A[front]<0)stk.push_back(A[front]);
		if(front+1-back==K)
		{
			if(stk.empty())answer.push_back(0);
			else answer.push_back(stk.front());
			if(stk.front()==A[back++])stk.pop_front();
		}
		front++;
	}	
	return answer;
}