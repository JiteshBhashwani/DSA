#include<bits/stdc++.h>
using namespace std;
bool isConconent(char ch)
{
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main(){

	string str;
	cin >> str;
	if (!(isConconent(str[2])))
	{
		cout << "invalid";
		return 0;
	}
	if(((str[0]+str[1])%2==0) && ((str[3]+str[4])%2==0) && ((str[4]+str[5])%2==0) && ((str[7]+str[8])%2==0) )
	{
		cout << "valid";
		return 0;
	}
	else
	{
		cout << "invalid";
	}
	
	
	

return 0;
}

//[src](https://www.hackerearth.com/problem/algorithm/cartag-948c2b02/)