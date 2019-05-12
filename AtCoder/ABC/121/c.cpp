#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    ll N, M, ans = 0;
    cin >> N >> M;
    vector<pair<ll, ll>> pairs(N);

    rep(i, N) {
        ll A, B;
        cin >> A >> B;
        pairs[i] = make_pair(A, B); // pairを挿入 price, stock
    }

    sort(pairs.begin(), pairs.end());

    rep(i, N) {
        ll price, stocks;
        price = pairs[i].first;
        stocks = pairs[i].second;

        if (pairs[i].second < M) {
            M -= stocks;
            ans += price * stocks;
        } else {
            ans += M * price;
            cout << ans << "\n";
            return 0;
        }
    }
}
