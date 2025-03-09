#include "menu.h"

void Menu::MainMenu()
{
	while (1) {
		int UserChoice;
		do {
			std::cout << "\tВиселица\n1. Начать игру\n2. Выйти" << std::endl;
			std::cout << "Введите номер пункта меню: ";
			std::cin >> UserChoice;
			if (std::cin.fail()) {
				system("cls");
				std::cin.clear();
				std::cin.get();
				std::cout << "Неверный ввод, попробуйте снова." << std::endl;
			}
		} while (UserChoice != 1 && UserChoice != 2);

		switch (UserChoice) {
		case 1:
			NewWord();
			ResultMenu();
			break;
		case 2:
			std::cout << "Выход" << std::endl;
			break;
		default:
			std::cout << "Неизвестная ошибка" << std::endl;
			break;
		}
		if (UserChoice == 2)
			break;
	}
}

void Menu::ResultMenu()
{
	if (Game() == true) 
		std::cout << "Молодец! Ты угадал слово - " << word << std::endl;
	else
		std::cout << "Ты проиграл! Я загадал слово - " << word << std::endl;
	time_t endTime = time(0);
	double timeSpent = difftime(endTime, startTime);
	std::cout << "Ты закончил игру за " << timeSpent << " секунд." << std::endl;
	std::cout << "Ты потратил " << tries << " попыток." << std::endl;
	std::cout << "Буквы, которые ты угадал: " << secret_word << std::endl;

}