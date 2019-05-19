#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int N, K;
    string S, ans;
    cin >> N >> K;
    cin >> S;

    rep(i, N) {
        if (i + 1 == K) {
            printf("%c", tolower(S[i]));
        } else {
            printf("%c", S[i]);
        }
    }

    printf("\n");
    return 0;
}
