#include <iostream>
using namespace std;

int main() {
    int H, M;
    int temp = 0;
    cin >> H >> M;
    if (M < 45) {
        temp = 15 + M;
        H--;
    } else {
        temp = M - 45;
    }
    if (H < 0) {
        H = 23;
    }
    cout << H << ' ' << temp;
}