#ifndef RNA_H
#define RNA_H

#include <string>

class RNA {
private:
    std::string dna;

public:
    RNA(std::string t);
    std::string transcribe();
};

#endif
