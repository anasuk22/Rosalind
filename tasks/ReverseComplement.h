#ifndef REVERSE_COMPLEMENT_H
#define REVERSE_COMPLEMENT_H

#include <string>

class ReverseComplement {
private:
    std::string dna;

public:
    ReverseComplement(std::string s);
    std::string getReverseComplement();
};

#endif
