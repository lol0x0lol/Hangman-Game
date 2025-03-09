#include "menu.h"

void Menu::MainMenu()
{
	while (1) {
		int UserChoice;
		do {
			std::cout << "\t��������\n1. ������ ����\n2. �����" << std::endl;
			std::cout << "������� ����� ������ ����: ";
			std::cin >> UserChoice;
			if (std::cin.fail()) {
				system("cls");
				std::cin.clear();
				std::cin.get();
				std::cout << "�������� ����, ���������� �����." << std::endl;
			}
		} while (UserChoice != 1 && UserChoice != 2);

		switch (UserChoice) {
		case 1:
			NewWord();
			ResultMenu();
			break;
		case 2:
			std::cout << "�����" << std::endl;
			break;
		default:
			std::cout << "����������� ������" << std::endl;
			break;
		}
		if (UserChoice == 2)
			break;
	}
}

void Menu::ResultMenu()
{
	if (Game() == true) 
		std::cout << "�������! �� ������ ����� - " << word << std::endl;
	else
		std::cout << "�� ��������! � ������� ����� - " << word << std::endl;
	time_t endTime = time(0);
	double timeSpent = difftime(endTime, startTime);
	std::cout << "�� �������� ���� �� " << timeSpent << " ������." << std::endl;
	std::cout << "�� �������� " << tries << " �������." << std::endl;
	std::cout << "�����, ������� �� ������: " << secret_word << std::endl;

}