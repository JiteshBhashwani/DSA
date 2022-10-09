#include "dQueue.hpp"

void menu()
{
	std::system("clear");
	std::cout << "press 0: exit\n";
	std::cout << "press 1: pop_back()\n";
	std::cout << "press 2: pop_front()\n";
	std::cout << "press 3: push_back()\n";
	std::cout << "press 4: push_front()\n";
	std::cout << "press 5: clear list\n";
}

int main()
{
	dQueue q;

	int choice;
	do
	{
		menu();
		std::cout << q << std::endl;
		std::cout << ":";
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			break;
		case 1:
			q.pop_back();
			break;
		case 2:
			q.pop_front();
			break;
		case 3:
		{
			int x;
			std::cin >> x;
			q.push_back(x);
		}
		break;
		case 4:
		{
			int x;
			std::cin >> x;
			q.push_front(x);
		}
		break;
		case 5:
			q.clear();
			break;
		default:
			break;
		}
	} while (choice != 0);

	return 0;
}