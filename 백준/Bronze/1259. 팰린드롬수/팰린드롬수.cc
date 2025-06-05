#include <iostream>
using namespace std;

int main() {
    string str;
    while (cin >> str) {
        bool isYes = true;
        if (str == "0")
            break;
        for (int i = 0; i <= str.length() / 2; i++) {
            if (str[i] != str[str.length() -1 - i]) {
                isYes = false;
            }
        }
        if (isYes)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
}