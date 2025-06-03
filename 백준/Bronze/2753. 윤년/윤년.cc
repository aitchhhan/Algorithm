#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 4 == 0) ? ((n % 400 == 0) ? 1 : (n % 100 != 0) ? 1 : 0) : 0);
}