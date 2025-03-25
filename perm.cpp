#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;


// Using a class
class Permutations {
public:
  Permutations(int length);

private:
  int _len;
  vector<char> alpha = {'0', '1'};
  void gen_perms(string current);
};

Permutations::Permutations(int length) {
  _len = length;
  gen_perms("");
}

void Permutations::gen_perms(string current) {
  if (current.length() == _len) {
    cout << current << endl;
    return;
  }
  
  for (char letter : alpha) {
    gen_perms(current + letter);
  }
}

// using Static variables

// vector<string> gen_perms(int variables, size_t length) {
//   static vector<string> perms;
//   static size_t len = length;
//   static vector<string> alphabet;
//   alphabet.resize(variables);
//   for (size_t v = 0; v < variables; ++v) {
//     alphabet.push_back();
//   }
//   for (auto _ : alphabet)
//     cout << _ << " ";
//   cout << endl;
//   return perms;
// }

int main() {
  Permutations p(2);  
  return 0;
}
