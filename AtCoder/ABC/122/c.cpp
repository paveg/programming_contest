#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    vector<int> vec(N + 1, 0);
    rep(i, N) {
        if (i + 1 < N && str[i] == 'A' && str[i + 1] == 'C') vec[i + 1] = vec[i] + 1;
        else vec[i + 1] = vec[i];
    }

    rep(i, Q) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        cout << vec[r] - vec[l] << "\n";
    }
    return 0;
}
