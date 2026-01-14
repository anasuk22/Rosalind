#include "ReverseComplement.h"

ReverseComplement::ReverseComplement(std::string s) {
    dna = s;
}

std::string ReverseComplement::getReverseComplement() {
    std::string result = "";

    for (int i = dna.length() - 1; i >= 0; i--) {
        char c = dna[i];

        if (c == 'A') result += 'T';
        else if (c == 'T') result += 'A';
        else if (c == 'C') result += 'G';
        else if (c == 'G') result += 'C';
    }

    return result;
}
