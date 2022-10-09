#include <bits/stdc++.h>


int main(){

	int queires;
	std::cin >> queires;

	while(queires--)
	{
		int PoB1,PoB2;
		int participents;
		int Q1{0};
        int Q2{0};
		int cost{0};
		std::cin >> PoB1 >> PoB2 >> participents;
		for (int i = 0; i < participents; ++i)
		{
			int a,b;
			std::cin >> a >> b;
			Q1 += a;
			Q2 += b;
		}
		if (PoB1 < PoB2)
		{
			if(Q1 > Q2)
			{
				cost = (PoB1 * Q1) + (PoB2 * Q2); 
			}
			else
			{
				cost = (PoB2 * Q1) + (PoB1 * Q2);
			}
		}
		else
		{
			if(Q1 > Q2)
			{
				cost = (PoB2 * Q1) + (PoB1 * Q2); 
			}
			else
			{
				cost = (PoB1 * Q1) + (PoB2 * Q2);
			}			
		}
		std::cout << cost << "\n";
	}

return 0;
}

// src - https://www.hackerearth.com/problem/algorithm/mojtaba-prepares-contest-29b2a044/