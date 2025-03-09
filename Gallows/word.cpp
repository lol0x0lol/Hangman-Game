#include "word.h"

void Word::NewWord()
{
    if (!words_from_file.empty()) {
        srand(time(0));
        word = words_from_file[rand() % words_from_file.size()];
    }
    else {
        word = "default";
    }
}
