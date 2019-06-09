#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    int N;
    cin >> N;
    vector<int> W(N);
    rep(i, N) cin >> W[i];

    int minT = 101;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < N; i++) {
        int T = i;
        bool flag = false;
        s1 = 0, s2 = 0;

        rep(j, W.size()) {
            if (j > T) flag = true;
            if (flag) {
                s1 += W[j];
            } else {
                s2 += W[j];
            }
        }
        minT = min(minT, abs(s1 - s2));
    }

    cout << minT << endl;
    return 0;
}
