#include "RNA.h"

RNA::RNA(std::string t) {
    dna = t;
}

std::string RNA::transcribe() {
    std::string rna = dna;

    for (int i = 0; i < rna.length(); i++) {
        if (rna[i] == 'T') {
            rna[i] = 'U';
        }
    }

    return rna;
}
