#ifndef PERMUTATION_H
#define PERMUTATION_H

#include <vector>

class Permutation {
private:
    int n;
    std::vector<std::vector<int>> all_perms;

    void generate(std::vector<int>& current, std::vector<bool>& used);

public:
    Permutation(int size);
    std::vector<std::vector<int>> getAllPermutations();
};

#endif
