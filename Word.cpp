#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

int main() {

  string str;
  int countLower = 0, countUpper = 0;

  cin >> str;

  for (auto c : str) {
    islower(c) ? countLower++ : countUpper++;
  }

  if (countLower > countUpper) {
    transform(str.cbegin(), str.cend(), str.begin(),
              [](unsigned char c) { return tolower(c); });
  } else if (countUpper > countLower) {
    transform(str.cbegin(), str.cend(), str.begin(),
              [](unsigned char c) { return toupper(c); });
  } else {
    transform(str.cbegin(), str.cend(), str.begin(),
              [](unsigned char c) { return tolower(c); });
  }

  cout << str << endl;

  return 0;
}
