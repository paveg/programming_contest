#include <iostream>
#include <cmath>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)


int main() {
    int N, K;
    cin >> N >> K;
    double point, ans = 0.0;

    rep(i, N) {
        point = round(i + 1 * 1.0);
        int count = 0;
        while (1 <= point && point < K) {
            point *= 2.0;
            count++;
        }

        ans += (1.0 / N) * pow((1.0 / 2.0),  count);
    }


    printf("%.12f\n", ans);
    return 0;
}
