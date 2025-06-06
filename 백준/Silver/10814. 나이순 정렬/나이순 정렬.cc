#include <iostream>
#include <algorithm>
using namespace std;

struct Human {
    int id;
    int age;
    string name;
};

bool compare(Human a, Human b) {
    if (a.age != b.age)
        return a.age < b.age;
    else
        return a.id < b.id;
}

Human human[100001];
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> human[i].age >> human[i].name;
        human[i].id = i;
    }
    sort(human, human + N, compare);
    for (int k = 0; k < N; k++)
        cout << human[k].age << " " << human[k].name << '\n';
}