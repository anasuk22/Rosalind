#ifndef DNA_COUNTER_H
#define DNA_COUNTER_H

#include <string>

class DnaCounter {
private:
    std::string dna;

public:
    DnaCounter(std::string s);

    int countA();
    int countC();
    int countG();
    int countT();
};

#endif