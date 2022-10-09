#include <bits/stdc++.h>

int change(std::string number)
{
	int val[]{6,2,5,5,4,5,6,3,7,6};
	int stricks{0};
	for (int i = 0; i < number.size(); ++i)
	{
		stricks += val[(number[i] - '0')];
	}
	return stricks;
}
int main(){
    int queries; std::cin >> queries;
    while (queries--)
    {
        std::string number; std::cin >> number;
        int stricks = change(number);
        std::string answer{""};
        if((stricks % 2))
        {
            answer.push_back('7');
            stricks-=3;
        }
        while(stricks)
        {
            answer.push_back('1');
            stricks-=2;
        }
        std::cout << answer;
    }
    

return 0;
}
// https://www.hackerearth.com/problem/algorithm/seven-segment-display-nov-easy-e7f87ce0/