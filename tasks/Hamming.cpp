#include "Hamming.h"

Hamming::Hamming(std::string a, std::string b) {
    s = a;
    t = b;
}

int Hamming::distance() {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            count++;
        }
    }

    return count;
}
