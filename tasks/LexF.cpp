#include "LexF.h"

LexF::LexF(std::vector<char> letters, int length) {
    alphabet = letters;
    n = length;
    generate("");
}

void LexF::generate(std::string current) {
    if (current.length() == n) {
        all_words.push_back(current);
        return;
    }

    for (char c : alphabet) {
        generate(current + c);
    }
}

std::vector<std::string> LexF::getAllWords() {
    return all_words;
}
