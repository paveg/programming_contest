#include <iostream>
#include <cstring>
#include <cstdlib>

#define rep(i, N) for (LL i = 0; i < N; ++i)
typedef long long int LL;

using namespace std;

float synop(float m) {
    if (m < 100) return 00;
    else if (100 <= m && m <= 5000) return m / 1000 * 10.0;
    else if (6000 <= m && m <= 30000) return m / 1000 + 50.0;
    else if (35000 <= m && m <= 70000) return (m / 1000 - 30) / 5 + 80;
    else if (70000 < m) return 89;
}

int main() {
    float M;
    cin >> M;
    float s = synop(M);

    if (s < 10) {
        cout << 0 << s << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}
