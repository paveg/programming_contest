#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    ll N, M, A, B, C, ans = 0;
    cin >> N >> M;
    priority_queue<pair<ll, ll>> que;
    rep(i, N) {
        cin >> A;
        que.push(make_pair(A, 1));
    }
    rep(i, M) {
        cin >> B >> C;
        que.push(make_pair(C, B));
    }
    rep(i, N) {
        pair<ll, ll> p = que.top();
        que.pop();
        ans += p.first;
        if (p.second > 1) {
            p.second--;
            que.push(p);
        }
    }

    cout << ans << endl;
    return 0;
}
