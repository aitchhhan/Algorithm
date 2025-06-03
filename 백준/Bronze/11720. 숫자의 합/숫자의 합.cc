#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    char c[101];
    int sum = 0;

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        char temp[2] = { c[i], '\0'};
        sum += atoi(temp);
    }
    cout << sum;
}