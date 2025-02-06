#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  string s;
  unordered_map<int, int> map;

  cin >> s;

  for (char c : s) {
    map[c]++;
  }

  cout << (map.size() % 2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

  return 0;
}
