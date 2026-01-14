///////////////////////////////////////////////
//DNA Counter    .\rosalind.exe
///////////////////////////////////////////////

// #include <iostream>
// #include "tasks/DnaCounter.h"

// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     DnaCounter counter(s);

//     cout << counter.countA() << " ";
//     cout << counter.countC() << " ";
//     cout << counter.countG() << " ";
//     cout << counter.countT() << endl;

//     return 0;
// }

////////////////////////////////////////////////
//RNA       .\rna.exe
///////////////////////////////////////////////

// #include <iostream>
// #include "tasks/RNA.h"

// using namespace std;

// int main() {
//     string t;
//     cin >> t;

//     RNA rna(t);

//     cout << rna.transcribe() << endl;

//     return 0;
// }


///////////////////////////////////////////////
//Reverse Complement    .\revc.exe
///////////////////////////////////////////////

// #include <iostream>
// #include "tasks/ReverseComplement.h"

// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     ReverseComplement rc(s);

//     cout << rc.getReverseComplement() << endl;

//     return 0;
// }



///////////////////////////////////////////////
//Hamming     .\hamm.exe
///////////////////////////////////////////////
// #include <iostream>
// #include "tasks/Hamming.h"

// using namespace std;

// int main() {
//     string s, t;
//     cin >> s;
//     cin >> t;

//     Hamming h(s, t);

//     cout << h.distance() << endl;

//     return 0;
// }



///////////////////////////////////////////////
//Permutation   .\perm.exe
///////////////////////////////////////////////

// #include <iostream>
// #include "tasks/Permutation.h"

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     Permutation p(n);
//     vector<vector<int>> perms = p.getAllPermutations();

//     cout << perms.size() << endl;

//     for (auto &v : perms) {
//         for (int x : v) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


///////////////////////////////////////////////
//LexF   .\lexf.exe
///////////////////////////////////////////////


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "tasks/LexF.h"

using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<char> alphabet;
    string temp;

    while (ss >> temp) {
        alphabet.push_back(temp[0]);
    }

    int n;
    cin >> n;

    LexF lex(alphabet, n);
    vector<string> words = lex.getAllWords();

    for (string w : words) {
        cout << w << endl;
    }

    return 0;
}
