#include"cQueue.hpp"
void menu()
{
	std::system("clear");
	std::cout << "press 0: exit\n";
	std::cout << "press 1: enqueue()\n";
	std::cout << "press 2: dequeue()\n";
}
int main() 
{
	cQueue q;
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
			int x; std::cin >> x;
			if(!q.isFull()) std::cout << x << " added" << std::endl;
			q.enqueue(x);
			break;
		case 2:
			std::cout << q.dequeue() << "dequed from queue" << std::endl;  
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	return 0;
}
