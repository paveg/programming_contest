#include <iostream>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int r, D, x;
    cin >> r >> D >> x;
    for (int i = 1; i < 11; i++) {
        x = x * r - D;
        cout << x << endl;
    }
    return 0;
}
