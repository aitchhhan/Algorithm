#include <iostream>
#include <algorithm>
using namespace std;

string str[100001];
string arr[100001];

int main() {
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> str[i];

    cin >> M;
    for (int k = 0; k < M; k++)
        cin >> arr[k];
    
    sort(str, str + N);
    
    for (int j = 0; j < M; j++) {
        if (binary_search(str, str + N, arr[j]))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}