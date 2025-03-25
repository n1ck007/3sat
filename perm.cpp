#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;


// Using a class
class Permutations {
public:
  Permutations(int variables, int length);
  void print_perms(vector<int> curr);

private:
  int _len;
  vector<int> _alpha = {};
  void gen_perms(vector<int> curr);
};

Permutations::Permutations(int variables, int length) {
  _len = length;

  for (int i = 0; i < variables; ++i) {
    _alpha.push_back(i);
  }
  _len = length;
  vector<int> curr;
  gen_perms(curr);
}

void Permutations::print_perms(vector<int> curr) {
  for (auto const & _ : curr) {
    cout << _;
  }
  cout << endl;
}

void Permutations::gen_perms(vector<int> curr) {
  if (curr.size() == _len) {
    print_perms(curr);
    return;
  }
  
  for (int number : _alpha) {
    curr.push_back(number);
    gen_perms(curr);
    curr.pop_back();
  }
}

// using Static variables

// vector<string> gen_perms(int variables, size_t length) {
//   static vector<string> perms;
//   static size_t len = length;
//   static vector<string> _alphabet;
//   _alphabet.resize(variables);
//   for (size_t v = 0; v < variables; ++v) {
//     _alphabet.push_back();
//   }
//   for (auto _ : _alphabet)
//     cout << _ << " ";
//   cout << endl;
//   return perms;
// }

int main() {
  Permutations p(2, 4);  
  return 0;
}
