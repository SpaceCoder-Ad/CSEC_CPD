#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  string s;
  cin >> s;

  char curr = 'a';
  
  int dist;
  int count = 0;

  for (const auto c : s) {
    dist = abs(curr - c);
    if (dist >= 14) {
      count += 26 - dist;
    } else {
      count += dist;
    }

    curr = c;
  }

  cout << count << endl;

  return 0;
}

