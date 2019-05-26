#include <iostream>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int A, P;
    cin >> A >> P;
    int ans = 0;
    P += A * 3;
    ans = P / 2;

    cout << ans << endl;
    return 0;
}
