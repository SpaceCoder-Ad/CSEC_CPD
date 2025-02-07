#include <iostream>

using namespace std;

int main() {

  int a, b, c, d;
  string s;
  cin >> a >> b >> c >> d;
  
  cin >> s;

  int i = 0, sum = 0;

  while(i < s.length()) {
    if (s[i] == '1')
      sum += a;
    else if (s[i] == '2')
      sum += b;
    else if (s[i] == '3')
      sum += c;
    else if (s[i] == '4')
      sum += d;
    i++;
  }
  cout << sum << endl;

  return 0;
}

