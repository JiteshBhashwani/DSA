#include<bits/stdc++.h>
using namespace std;

void printNumInc(int x)
{
	if(x<1) return;
	printNumInc(x-1);
	cout << x;
}
void printNumDec(int x)
{
	if(x<1) return;
	cout << x;
	printNumInc(x-1);
}
int sumFirst(int x)
{
	if(x==1) return x;
	return x + sumFirst(x - 1);
}
int Fact(int x)
{
	if(x==2) return x;
	return x * Fact(x-1);
}
void reverse(int arr[],int l,int f = 0)
{
	if(f>=l) return;
	swap(arr[f],arr[l]);
	reverse(arr,l-1,f+1);
}
bool checkPalindrome(int arr[],int l,int f = 0)
{
	if(f>=l) return true;
	if(arr[f] != arr[l]) return false;
	return checkPalindrome(arr,l-1,f+1);
}
int fib(int x)
{
	if(x <= 1) return x;
	return fib(x-1) + fib(x-2);
}



int main()
{
	for (size_t i = 0; i <= 20; i++)
	{
		cout << fib(i) << endl;
	}
	
}