#include <iostream>
#include <vector>

using namespace std;

int main() {

  int t;
  vector<int> num;

  cin >> t;

  while (t--) {
    int x;
    cin >> x;
    num.push_back(x);
  }

  int s = 0, d = 0, card = 0;
  bool seraj = true;

  int l = 0, r = num.size() - 1;

  while (l <= r) {
    if (num[l] > num[r]) {
      card = num[l];
      l++;
    } else {
      card = num[r];
      r--;
    }

    if (seraj) {
      s += card;
    } else {
      d += card;
    }
    seraj = !seraj;
  }
  cout << s << " " << d << endl;
  return 0;
}
