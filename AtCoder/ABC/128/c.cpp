#include <iostream>
#include <vector>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> vec(M);
    cout << endl;
    rep(i, M) {
        int k;
        cin >> k;
        vec[i].resize(k);
        rep(j, k) {
            cin >> vec[i][j];
            --vec[i][j];
        }
    }

    vector<int> p(M);
    rep(i, M) cin >> p[i];
    int ans = 0;
    rep (i, 1 << N) {
        bool ok = true;
        rep(j, M) {
            int c = 0;
            for (int id: vec[j]) {
                if ((i >> id) & 1) ++c;
            }
            c %= 2;
            if (c != p[j]) ok = false;
        }
        if (ok) ++ans;
    }

    cout << ans << endl;
    return 0;
}
