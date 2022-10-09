#include <iostream>

int main(){

    int queries;
	std::cin >> queries;
	while(queries--)
	{
		int n;
		std::cin >> n;
		std::string binary;
		std::cin >> binary;
		long long dec = 0;
		long long multiple = 1;
		for (int i = n-1; i >= 0; --i)
		{
			if (binary[i] == '1')
			{
				dec += multiple;
			}
			multiple*=2;
		}
		std::cout  << dec << std::endl;
	}
return 0;
}