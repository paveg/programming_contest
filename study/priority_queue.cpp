#include <iostream>
#include <vector>
#include <queue>
#include <random>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int n;
    priority_queue<int> q;
    cin >> n;
    rep(i, n) {
        int r = random() / 10000000;
        printf("input: %d\n", r);
        q.push(r);
    }

    printf("\n");
    while (!q.empty()) {
        auto p = q.top();
        q.pop();
        printf("output: %d\n", p);
    }
    return 0;
}

/*
input: 180
input: 84
input: 168
input: 171
input: 195

output: 195
output: 180
output: 171
output: 168
output: 84
 */
