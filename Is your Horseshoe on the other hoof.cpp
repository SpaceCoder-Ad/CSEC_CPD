#include <bits/stdc++.h>

using namespace std;

int main () {

  int x;
  set<int> set;

  while (cin >> x) {
    set.insert(x);
  }

  cout << 4 - set.size() << endl;

  return 0;
}
