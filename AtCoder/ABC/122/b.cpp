#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

bool matchACGT(char t) {
    if (t == 'A' || t == 'C' || t == 'G' || t == 'T') return true;
    return false;
}

int main() {
    char S[10];
    scanf("%s", S);
    int cnt = 0, ans = 0;
    rep(i, strlen(S)) {
        if (matchACGT(S[i])) cnt++;
        else cnt = 0;

        ans = max(ans, cnt);
    }

    printf("%d\n", ans);
    return 0;
}
