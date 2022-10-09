#include"Queue.hpp"
void menu()
{
	std::system("clear");
	std::cout << "press 0: exit\n";
	std::cout << "press 1: enqueue()\n";
	std::cout << "press 2: dequeue()\n";
    std::cout << "press 3: change front(x)\n";
    std::cout << "press 4: change back(x)\n";
}
int main() 
{
	Queue q;
	int choice;
	do
	{
		menu();
		std::cout << q << std::endl << ":";
		std::cin >> choice;
		switch (choice)
		{
		case 0: break;
		case 1:
			{int x; std::cin >> x;
			std::cout << x << " added" << std::endl;
			q.inQueue(x);}
			break;
		case 2:
			std::cout << q.deQueue() << "dequed from queue" << std::endl;  
			break;
        case 3:
			{int x; std::cin >> x;
            q.front() = x;}
			break;
        case 4:
			{int x; std::cin >> x;
            q.back() = x;}
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	return 0;
}