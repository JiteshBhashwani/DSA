#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void move(vector<int>& arr){
    int head = 0;
    int tail = arr.size()-1;

    while(head<tail)
    {
        while(arr[head++]<0);
        while(arr[tail--]>0);
        swap(arr[--head],arr[++tail]);
    }

}
int main() {

	vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 ,-69};
	move(arr);
	for (int e : arr)
	cout<<e << " ";
	return 0;
}

// This code is contributed by repakaeshwaripriya
