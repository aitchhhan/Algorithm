#include <iostream>
using namespace std;

void FizzBuzz(int i) {
    if (i % 15 == 0) {
        cout << "FizzBuzz" << '\n';
    }
    else if (i % 3 == 0) {
        cout << "Fizz" << '\n';
    }
    else if (i % 5 == 0) {
        cout << "Buzz" << '\n';
    }
    else {
        cout << i << '\n';
    }
}

int main() {
    string str;
    for (int i = 0; i < 3; i++) {
        cin >> str;
        if (str[0] == 'F' || str[0] == 'B')
            continue;
        FizzBuzz(stoi(str) + 3 - i);
        break;
    }
}