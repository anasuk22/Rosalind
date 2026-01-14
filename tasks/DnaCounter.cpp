#include "DnaCounter.h"

DnaCounter::DnaCounter(std::string s) {
    dna = s;
}

int DnaCounter::countA() {
    int count = 0;
    for (char c : dna) {
        if (c == 'A') {
            count++;
        }
    }
    return count;
}

int DnaCounter::countC() {
    int count = 0;
    for (char c : dna) {
        if (c == 'C') {
            count++;
        }
    }
    return count;
}

int DnaCounter::countG() {
    int count = 0;
    for (char c : dna) {
        if (c == 'G') {
            count++;
        }
    }
    return count;
}

int DnaCounter::countT() {
    int count = 0;
    for (char c : dna) {
        if (c == 'T') {
            count++;
        }
    }
    return count;
}
