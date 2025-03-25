#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <array>
#include <tuple>
#include <algorithm>
#include <numeric>
#include <ranges>

using namespace std;

// int to variable
int itov(int i) {
  return (i % 2 == 0 ? i/2 : -i/2);
}

// int to varible string
string itovs(int i) {
  stringstream ss;
  ss << (i % 2 == 0 ? " " : "-") << "x" << i / 2;
  return ss.str();
}

template<class T>
void printexpr(T const & expr) {
  // use to print array or vector or type tuple<int, int, int>
  for (size_t i = 0; i < expr.size(); ++i) {
    
    cout << "( " << get<0>(expr[i]) << " or " << get<1>(expr[i]) << " or " << get<2>(expr[i]) << " )";
    // cout << "( " << itovs(get<0>(expr[i])) << " or " << itovs(get<1>(expr[i])) << " or " << itovs(get<2>(expr[i])) << " )";
    
    if (i != expr.size() - 1) {
      // cout << " and " << endl;
      cout << " and ";
    }
  }
  cout << endl;
}

template<class T>
void printlist(T container) {
  for (auto const & _ : container) {
    cout << _ << " "; 
  }
  cout << endl;
}

int main() {


  // TODO: Heap's algorithm
  // TODO: https://en.wikipedia.org/wiki/List_of_algorithms#Sequence_permutations

  // int vars = 3; // number of variables
  // const int conj = 2; // number of conjunctions
  // constexpr int terms = 3*conj; // number of terms
  // array<tuple<int, int, int>, conj> expr = {};

  // give an array with values between 0 and n print all permutations
  // vector<int> expr{0, 0, 0, 0, 0, 0};
  // size_t terms{expr.size()};
  // size_t max_val{4}; // values must be less than max
  // for (size_t t = 0; t < terms; ++t){
  //   for (size_t v = 0; v < max_val; ++v) {
  //     ++expr[t];
  //     printlist(expr);
  //   }
  // }

  // const int n = 4;
  // std::array<int, n> nums;
  // std::ranges::copy(std::views::iota(0, n), nums.begin());
  // std::vector<int> nums = {0, 1, 1};

  // std::cout << "All permutations:\n";
  // do {
  //     for (int num : nums) {
  //         std::cout << num << " ";
  //     }
  //     std::cout << "\n";
  // } while (std::next_permutation(nums.begin(), nums.end())); // Generate next permutation




  


  return 0;
}
