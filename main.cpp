#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int numberOfSteps(int num) {

    int i = 0;
    while (num > 0) {
      if (num % 2 == 0) {
        num /= 2;
      } else {
        num -= 1;
      }
      i++;
    }
    return i;
  }
};

int main() {
  Solution solution;

  int n = 123;
  int result = solution.numberOfSteps(n);

  cout << result;

  return 0;
}