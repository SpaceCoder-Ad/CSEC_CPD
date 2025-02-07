#include <iostream>

using namespace std;

int main() {

  int t;
  int count = 0;
  cin >> t;

  while (t--) {
    int p, v, t;
    int sum = 0;
    cin >> p >> v >> t;
    sum = p + v + t;

    sum >= 2 ? count++ : count;
  }
  cout << count << endl;
  return 0;
}

