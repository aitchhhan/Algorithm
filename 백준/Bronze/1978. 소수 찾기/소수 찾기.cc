#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num, res = 0;

    for(int i = 0; i < N; i++){
        cin >> num;
        int cnt = 0;

        for(int k = 1; k <= num; k++){
            if(num % k == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            res++;
        }
    }
    cout << res;
}