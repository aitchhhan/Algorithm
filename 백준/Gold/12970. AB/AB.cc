#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    int A = N / 2;
    int B = N - A;

    if (K > A * B)
        cout << -1;
    else if (K == A * B) {
        while (A--)
            cout << 'A';
        
        while (B--)
            cout << 'B';
    }
    else {
        int AA = K / B;
        int BB = K % B;
        int aaa = A - AA - 1;
        int bbb = B - BB;
        
        while (AA--)
            cout << 'A';
        
        while (bbb--)
            cout << 'B';
        
        cout << 'A';
        
        while (BB--)
            cout << 'B';
        
        while (aaa--)
            cout << 'A';
    }
}