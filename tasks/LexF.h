#ifndef LEXF_H
#define LEXF_H

#include <vector>
#include <string>

class LexF {
private:
    std::vector<char> alphabet;
    int n;
    std::vector<std::string> all_words;

    void generate(std::string current);

public:
    LexF(std::vector<char> letters, int length);
    std::vector<std::string> getAllWords();
};

#endif
