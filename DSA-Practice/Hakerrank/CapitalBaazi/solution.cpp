#include <iostream>
int main()
{

	std::string input;

	while (std::cin >> input)
	{
		for (size_t i = 0; i < input.size(); i++)
		{
			input[i]-=32;
		}
		std::cout << input << "\n";
	}
	
	return 0;
}