#include <iostream>
using namespace std;

int main() {
  int x = 0;
  cout << "Enter a number: ";
  cin >> x;
  
  if (x % 2 == 0) {
    cout << "The number is even." << endl;
  } else {
    cout << "The number is odd." << endl;
  }
  
  return 0;
}
