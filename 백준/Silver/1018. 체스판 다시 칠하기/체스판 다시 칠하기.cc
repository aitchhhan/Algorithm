#include <iostream>
#include <algorithm>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int WB_cnt(int x, int y) {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        for(int k = 0; k < 8; k++) {
            if(board[x + i][y + k] != WB[i][k])
                cnt++;
        }

    }
    return cnt;
}

int BW_cnt(int x, int y) {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        for(int k = 0; k < 8; k++) {
            if(board[x + i][y + k] != BW[i][k])
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> board[i];
    int minValue = 99999;
    for (int k = 0; k + 8 <= N; k++) {
        for (int j = 0; j + 8 <= M; j++) {
            int tmp = min(WB_cnt(k,j), BW_cnt(k,j));
            if(tmp < minValue) {
                minValue = tmp;
            }
        }
    }
    cout << minValue;
}