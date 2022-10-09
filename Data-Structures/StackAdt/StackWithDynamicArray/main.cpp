#include "Stack.hpp"

void menu()
{
	std::system("clear");
	std::cout << "press 0: exit\n";
	std::cout << "press 1: push()\n";
	std::cout << "press 2: pop()\n";
	std::cout << "press 3: isEmpty()\n";
	std::cout << "press 4: isFull()\n";
	std::cout << "press 5: display()\n";
	std::cout << "press 6: clear screen[shell cmd]\n\n";
	
}
int main() 
{
	Stack q(10);
    
	int choice;
	menu();
	do
	{
		std::cout<<":";
		std::cin >> choice;
		switch (choice)
		{
		case 0: break;
		case 1:
		{
			int x; std::cin >> x;
			if(!q.isFull())
			{
				std::cout << x << " added" << std::endl;
			}
			q.push(x);
		}
			break;
		case 2:
		{
			bool flag = !(q.isEmpty());
			int dequed = q.pop();
			if (flag)
			{
				std::cout << dequed << " popped" << std::endl;  
			}
		}
			break;
		case 3:
			std::cout << (q.isEmpty() ? "empty" : "not empty") << std::endl;
			break;
		case 4:
			std::cout << (q.isFull() ? "full" : "not full") << std::endl;
			break;
		case 5:
			q.display();
			break;
		case 6:
			menu();
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	return 0;
}