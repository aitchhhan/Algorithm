#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str;
    int res = 665;
    for (int i = 0; i < N; i++) {
        while (true) {
            res++;
            str = to_string(res);
            if (str.find("666") != string::npos)
                break;
        }
    }
    cout << str;
}