#include <iostream>
using namespace std;

struct Human {
    int weight, height;
};

Human human[49];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> human[i].height >> human[i].weight;
    }
    for (int k = 0; k < N; k++) {
        int rank = 1;
        for (int j = 0; j < N; j++) {
            if (k == j) continue;
            if (human[j].weight > human[k].weight && human[j].height > human[k].height)
                rank++;
        }
        cout << rank << " ";
    }
}