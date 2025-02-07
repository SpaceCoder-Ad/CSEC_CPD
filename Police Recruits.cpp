#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, len;
  vector<int> event;
  int sum = 0;

  cin >> n;
  len = n;

  while (n--) {
    int x;
    cin >> x;
    event.push_back(x);
  }

  int i = 0;
  int officer = 0, untreated = 0;

  while (i < len) {
    if (event[i] == -1) {
      if (officer > 0) {
        officer--;
      } else {
        untreated -= event[i];
      }
    } else {
      officer += event[i];
    }
    i++;
  }

  cout << untreated << endl;

  return 0;
}

