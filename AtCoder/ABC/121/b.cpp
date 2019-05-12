#include <iostream>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    int B[M], l;
    rep(i, M) {
        cin >> l;
        B[i] = l;
    }

    int ans = 0;
    int amount = 0;
    rep(i, N) {
        int A;
        rep(j, M) {
            cin >> A;
            amount += A * B[j];
        }
        if (amount + C > 0) ans++;
        amount = 0;
    }

    cout << ans << endl;
    return 0;
}