#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

struct shop {
    ll price;
    ll stock;

    bool operator<(const shop &another) const {
        return price < another.price;
    }
};

int main() {
    ll N, M, ans = 0;
    cin >> N >> M;
    vector<shop> S(N);
    ll A, B;
    rep(i, N) {
        cin >> A >> B;
        S[i].price = A;
        S[i].stock = B;
    }
    sort(S.begin(), S.end());

    rep(i, S.size()) {
        if (M > S[i].stock) {
            M -= S[i].stock;
            ans += S[i].price * S[i].stock;
        } else {
            ans += M * S[i].price;
            cout << ans << "\n";
            return 0;
        }
    }
}
