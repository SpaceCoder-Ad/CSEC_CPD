#include <iostream>

using namespace std;

int main () {
  int n;
  string s, result;
  
  int anton_wins = 0;
  int danik_wins = 0;
  
  cin >> n;
  cin >> s;

  for(auto c : s) {
    if (c == 'A') {
     anton_wins++; 
    } else if (c == 'D') {
     danik_wins++; 
    }
  }
  
  if (anton_wins > danik_wins) {
    result = "Anton";
  } else if (danik_wins > anton_wins){
    result = "Danik";
  } else result = "Friendship";
  
  cout << result << endl;

  return 0;
}
