#include <iostream>
using namespace std;

int main() {
    int n, x;
    int a = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a;

        if (x > a) {
            cout << a << " ";
        }
    }
}