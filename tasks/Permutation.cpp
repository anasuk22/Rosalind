#include "Permutation.h"

Permutation::Permutation(int size) {
    n = size;
    std::vector<int> current;
    std::vector<bool> used(n + 1, false); // od 1 do n
    generate(current, used);
}

void Permutation::generate(std::vector<int>& current, std::vector<bool>& used) {
    if (current.size() == n) {
        all_perms.push_back(current);
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(i);
            generate(current, used);
            current.pop_back();
            used[i] = false;
        }
    }
}

std::vector<std::vector<int>> Permutation::getAllPermutations() {
    return all_perms;
}
