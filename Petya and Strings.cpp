#include <cctype>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  string str1;
  string str2;

  cin >> str1 >> str2;

  transform(str1.cbegin(), str1.cend(), str1.begin(), [](unsigned char c) {
      return tolower(c);
  });

  transform(str2.cbegin(), str2.cend(), str2.begin(), [](unsigned char c) {
      return tolower(c);
  });
  if (str1 == str2) {
    cout << 0 << endl;
  } else if (str1 < str2) {
    cout << -1 << endl;
  } else if (str2 < str1) {
    cout << 1 << endl;
  }

  return 0;
}
