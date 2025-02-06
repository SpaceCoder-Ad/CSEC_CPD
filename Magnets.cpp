#include <iostream>

using namespace std;

int main () {

  int t;
  cin >> t;

  string prevMagnet = "";
  int group = 0;

  while (t--) {
    string magnet;
    cin >> magnet;
    if (prevMagnet != "" && prevMagnet != magnet) {
      group++;
    }
    prevMagnet = magnet;
  }
  group++;

  cout << group << endl;

  return 0;
}
