#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;


// Using a class
class Permutations {
public:
  Permutations(int length);
  void print_perms(vector<int> curr);

private:
  int _len;
  vector<int> alpha = {0, 1};
  void gen_perms(vector<int> current);
};

Permutations::Permutations(int length) {
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

void Permutations::gen_perms(vector<int> current) {
  if (current.size() == _len) {
    print_perms(current);
    return;
  }
  
  for (int number : alpha) {
    current.push_back(number);
    gen_perms(current);
    current.pop_back();
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
  Permutations p(3);  
  return 0;
}
