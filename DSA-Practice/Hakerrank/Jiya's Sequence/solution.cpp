#include <iostream>

int main(){

	int queries; std::cin >> queries;
	while (queries--)
	{
		long product = 1;
		int q2; std::cin >> q2;
		for (size_t i = 0; i < q2; i++)
		{
			long x; std::cin >> x;
			product *= x;
		}

		if (((product % 10) == 2) || ((product % 10) == 3) || ((product % 10) == 5))
		{
			std::cout << "YES\n";
		}
		else
	    {
			std::cout << "NO\n";
	    }
	}

return 0;
}