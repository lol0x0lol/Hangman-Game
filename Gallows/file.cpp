#include "file.h"

std::string File::Decryption(std::string encrypted_word)
{
	std::string decrypted_word = "";
	std::string decrypted_letter = "";
	for (char letter : encrypted_word) {
		if (letter == '/') {
			decrypted_word += char(stoi(decrypted_letter));
			decrypted_letter = "";
		}
		else {
			decrypted_letter += letter;
		}
	}
	return decrypted_word;
}

void File::ReadFile()
{
	std::string line;
	while (getline(encrypted_file, line)) {
		words_from_file.push_back(Decryption(line));
	}
}
