#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int check = 0, num = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '*') {
            if (i % 2 == 0)
                num += str[i] - '0';
            else
                num += (str[i] - '0') * 3;
        } else {
            check = i;
        }
    }

    int res = 0;
    while (true) {
        if (check % 2 == 0) {
            if ((num + res) % 10 == 0) {
                cout << res;
                break;
            }
        } else {
            if ((num + res * 3) % 10 == 0) {
                cout << res;
                break;
            }
        }
        res++;
    }
}