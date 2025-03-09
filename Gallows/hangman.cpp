#include "hangman.h"

void Hangman::Picture()
{
	switch (tries) {
	case 0:
		std::cout << " ----\n |  |\n |\n |\n |\n |\n";
		break;
	case 1:
		std::cout << " ----\n |  |\n |  o\n |\n |\n |\n";
		break;
	case 2:
		std::cout << " ----\n |  |\n |  o\n |  |\n |\n |\n";
		break;
	case 3:
		std::cout << " ----\n |  |\n |  o\n | /|\n |\n |\n";
		break;
	case 4:
		std::cout << " ----\n |  |\n |  o\n | /|\\\n |\n |\n";
		break;
	case 5:
		std::cout << " ----\n |  |\n |  o\n | /|\\\n | /\n |\n";
		break;
	case 6:
		std::cout << " ----\n |  |\n |  o\n | /|\\\n | / \\\n |\n";
		break;
	default:
		break;
	}
}

bool Hangman::Game()
{
	startTime = time(0);
	tries = 0;
	secret_word = std::string(word.size(), '_');
	char answer;
	while (tries < 6 && secret_word != word) {
		Picture();
		std::cout << "Угадай слово: " << secret_word << std::endl;
		std::cin >> answer;
		if (word.find(answer)==std::string::npos) {
			++tries;
			std::cout << "Такой буквы нету(" << std::endl;
		}
		else {
			for (size_t i = 0; i < word.size(); ++i) {
				if (word[i] == answer) {
					secret_word[i] = answer;
				}
			}
		}
		system("cls");
	}
	Picture();
	return secret_word == word;
}
