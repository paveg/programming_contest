#include <iostream>

#define rep(i, N) for (LL i = 0; i < N; ++i)
typedef long long int LL;

using namespace std;

int main() {
    LL A, B;
    LL limit = 2;
    cin >> A >> B;
    LL ans = 0;
    rep(i, limit) ans += (A > B) ? A-- : B--;

    cout << ans << endl;
    return 0;
}
