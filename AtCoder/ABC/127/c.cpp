#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    ll n, m, l, r;
    cin >> n >> m;
    ll ans = 0;
    ll mn = 100001, mx = -100001;
    vector<ll> lm(m), rm(m);
    rep(i, m) {
        cin >> l >> r;
        mx = max(l, mx);
        mn = min(r, mn);
    }

    REP(i, 1, n + 1) {
        if (mx <= i && i <= mn) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
