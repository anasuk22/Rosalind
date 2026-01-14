#ifndef HAMMING_H
#define HAMMING_H

#include <string>

class Hamming {
private:
    std::string s;
    std::string t;

public:
    Hamming(std::string a, std::string b);
    int distance();
};

#endif
