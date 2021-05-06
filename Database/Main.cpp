#include "Database.h"
#include <iostream>

int main() {
	Database database;

	bool quit = false;
	while (!quit) {
		//display menu
		std::cout << "1) Add\n"; 
		std::cout << "2) Display All\n"; 
		std::cout << "3) Display Name\n"; 
		std::cout << "4) Display Type\n"; 
		std::cout << "5) Load\n"; 
		std::cout << "6) Save\n"; 
		std::cout << "7) Quit\n";

		std::cout << "Enter selection: ";
		int selection;
		std::cin >> selection;
		std::cout << "\n";

		switch (selection) {
		case 1:
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Mammal\n";
			std::cout << "Enter selection: ";
			int type;
			std::cin >> type;
			database.Add(static_cast<Animal::eType>(type));
		}
			break;
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			std::cout << "Enter name: ";
			std::string name;
			std::cin >> name;
			database.Display(name);
		}
			break;
		case 4:
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Mammal\n";
			std::cout << "Enter selection: ";
			int type;
			std::cin >> type;
			database.Display(static_cast<Animal::eType>(type));
		}
			break;
		case 5: 
		{
			std::cout << "Enter filename: "; 
			std::string name; 
			std::cin >> name;
			database.Load(name);
		}	
			break;
		case 6:
		{
			std::cout << "Enter filename: ";
			std::string name;
			std::cin >> name;
			database.Save(name);
		}
			break;
		case 7:
			quit = true;
			break;
		}
	}
}