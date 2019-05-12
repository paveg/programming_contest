#include <cstdio>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int H, W, h, w;
    scanf("%d %d", &H, &W);
    scanf("%d %d", &h, &w);

    printf("%d\n", (H - h) * (W - w));
    return 0;
}
