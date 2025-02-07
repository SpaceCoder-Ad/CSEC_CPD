#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  int i = 0, x, count = 1;
  int r = 0, c = 0;

  while (cin >> x) {
    if (count % 5 == 1) {
      r++;
      c = 0;
    }
    c++; 
    if (x == 1) {
      break;
    }
    count++;
  }

  cout << abs(3 - r) + abs(3 - c) << endl;

  return 0;
}

