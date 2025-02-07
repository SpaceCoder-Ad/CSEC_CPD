#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  int l = 0, r = 1;
  int count = 0;

  while (r < n) {
    if (s[l] == s[r]) {
      count++;
    }
    l++;
    r++;
  }

  cout << count << endl;

  return 0;
}

