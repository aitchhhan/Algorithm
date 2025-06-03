#include <iostream>

using namespace std;

int main() {
  int num, square =0;
  for(int i = 0; i < 5; i++)
  {
    cin >> num;

    square += num * num;
  }

  cout << square % 10;
}