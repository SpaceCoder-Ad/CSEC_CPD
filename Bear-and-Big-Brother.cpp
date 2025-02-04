#include <iostream>

using namespace std;

int main () {

  int a, b;
  int countYear = 0;

  cin >> a >> b;

  while (a <= b) {
    a *= 3;
    b *= 2;
    countYear++; 
  }
  
  cout << countYear << endl;

  return 0;
}
