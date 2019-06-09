#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) {
        cin >> S[i];
    }

    int maxSideCount = 0;
    rep(i, S.size()) {
        int sideCnt = 0;
        rep(j, W) {
            if (S[i][j] == '#') {
                if (sideCnt > (S[i].size() - (j + 1))) break;
            }
            if (S[i][j] == '.') {
                sideCnt++;
            }
        }
        maxSideCount = max(maxSideCount, sideCnt);
    }

    int maxVerticalCount = 0;
    rep(i, W) {
        int verticalCnt = 0;
        rep(j, H) {
            if (S[j][i] == '#') {
                if (verticalCnt > (W - (j + 1))) break;
            }
            if (S[j][i] == '.') {
                verticalCnt++;
            }
        }
        maxVerticalCount = max(maxVerticalCount, verticalCnt);
    }

    cout << (maxSideCount + maxVerticalCount - 1) << endl;
    return 0;
}
