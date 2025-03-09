#pragma once


#include <vector>
#include <fstream>
#include <string>


class File
{
protected:
	std::vector<std::string> words_from_file;
	std::ifstream encrypted_file{ "word_list.txt" };

public:
	std::string Decryption(std::string encrypted_word);

	void ReadFile();
};

