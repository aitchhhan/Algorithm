#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, num = "";
    cin >> str;
    int res = 0;
    bool minus = false;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
            if (minus == true) {
                res -= stoi(num);
                num = "";
            } else {
                res += stoi(num);
                num = "";
            }
        } else {
            num += str[i];
        }
        if (str[i] == '-')
            minus = true;
    }
    cout << res;
}