#include <iostream>

using namespace std;
 
int main () {
  int n, h;
  
  int width = 0;

  cin >> n >> h;
  
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    
    if (x <= h) {
      width += 1;
    } else {
      width += 2;
    }
    
  }

	cout << width << endl;

  return 0;
}

