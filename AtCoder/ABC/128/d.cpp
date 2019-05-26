#include <iostream>
#include <queue>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    ll N, K;
    cin >> N >> K;
    priority_queue<ll> D, own;

    ll v;
    rep(i, N) {
        cin >> v;
        D.push(v);
    }

    ll ans = 0;
    rep(i, K) {
        auto q = D.top();
        if (q.first > 0) {
            ans += q.first;
        }
        D.pop();
    }

    cout << ans << endl;
    return 0;
}
