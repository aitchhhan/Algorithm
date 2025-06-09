#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;
    int arr[21] = {};
    string cal;
    int X;
    for (int i = 0; i < M; i++) {
        cin >> cal;
        if (cal == "add") {
            cin >> X;
            if (arr[X] == 0)
                arr[X] = 1;
        } else if (cal == "remove") {
            cin >> X;
            if (arr[X] == 1)
                arr[X] = 0;
        } else if (cal == "check") {
            cin >> X;
            cout << (arr[X] == 1 ? 1 : 0) << '\n';
        } else if (cal == "toggle") {
            cin >> X;
            arr[X] == 1 ? arr[X] = 0 : arr[X] = 1;
        } else if (cal == "all") {
            for (int k = 1; k <= 20; k++)
                arr[k] = 1;
        } else if (cal == "empty") {
            for (int k = 1; k <= 20; k++)
                arr[k] = 0;
        }
    }
}