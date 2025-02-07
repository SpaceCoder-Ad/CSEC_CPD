#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main () {

  int n, x;
  cin >> n;

  vector<int> num;

  while (cin >> x) {
    num.push_back(x);
  }

  sort(num.begin(), num.end());
  int i = 0;

  while (i < n) {
    cout << num[i]<< " ";
    i++;
  }  

  return 0;
}
