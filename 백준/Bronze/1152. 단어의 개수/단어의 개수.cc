#include <iostream>
using namespace std;

int main() {
    string s;
    int result = 1;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            result++;
    }
    if (s[0] == ' ')
        result--;

    if (s[s.length() - 1] == ' ')
        result--;
    
    cout << result;
}