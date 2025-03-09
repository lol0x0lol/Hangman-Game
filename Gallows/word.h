#pragma once


#include "file.h"


class Word: public File
{
protected:
	std::string word;
	std::string secret_word = "";
	int tries = 0;

public:
    Word() {
        ReadFile();
        if (!words_from_file.empty()) {
            srand(time(0));
            word = words_from_file[rand() % words_from_file.size()];
        }
        else {
            word = "default";
        }
    }

    void NewWord();
};

